#include "frameProcessor.h"

#include <QApplication>
#include <imageCaptureInterfaceQt.h>

#include "physicsMainWindow.h"

FrameProcessor::FrameProcessor(QObject *parent) : QThread(parent)
{
    SYNC_PRINT(("FrameProcessor::processFrame():called\n"));
    detector = PatternDetectorFabric::getInstance()->fabricate("Apriltag");
}

void FrameProcessor::processFrame(ImageCaptureInterface::FrameMetadata frameData)
{
    Statistics stats;
    static int count=0;
    count++;

    static bool skipping = false;
    if (skipping)
    {
        return;
    }
    skipping = true;
    QApplication::processEvents();
    skipping = false;



//    SYNC_PRINT(("New frame arrived\n"));
    ImageCaptureInterface::FramePair pair = input->getFrameRGB24();
    RGB24Buffer * result = pair.rgbBufferLeft();
    pair.setRgbBufferLeft(NULL);
    pair.freeBuffers();

    if (detector != NULL)
    {
        vector<PatternDetectorResult> patterns;

        stats.startInterval();
        stats.enterContext("Detector ->");

        detector->setStatistics(&stats);
        detector->setInputImage(result);
        detector->operator ()();
        detector->getOutput(patterns);

        stats.leaveContext();

        /* Debug draw should be inproved */
        for (size_t i = 0; i < patterns.size(); i++)
        {
            PatternDetectorResult &pattern = patterns[i];

            Vector2dd a(pattern.mPosition);
            Vector2dd b(pattern.mOrtX);
            Vector2dd c(pattern.mUnityPoint);
            Vector2dd d(pattern.mOrtY);

            RGBColor color = RGBColor::parula((double)i / (patterns.size()));
            result->drawLine(a, b, color);
            result->drawLine(b, c, color);
            result->drawLine(c, d, color);
            result->drawLine(d, a, color);

            AbstractPainter<RGB24Buffer> p(result);
            Vector2dd center = (a + c) / 2;
            p.drawFormat(center.x(), center.y(), color, 2, "%d", pattern.mId);

        }
    } else {
        SYNC_PRINT(("FrameProcessor::processFrame(): detector is NULL\n"));
    }


    target->uiMutex.lock();
    target->uiQueue.emplace_back(new DrawRequestData);
    target->uiQueue.back()->mImage = result;
    target->uiQueue.back()->stats = stats;
    target->uiMutex.unlock();

    target->updateUi();

}

void FrameProcessor::setPatternDetectorParameters(GeneralPatternDetectorParameters params)
{
    SYNC_PRINT(("FrameProcessor::setPatternDetectorParameters(): called\n"));
    cout << params << endl;


    delete_safe(detector);
    detector = PatternDetectorFabric::getInstance()->fabricate(params.provider);
    if (detector == NULL) {
        SYNC_PRINT(("FrameProcessor::setPatternDetectorParameters(): were not able to create detector <%s>\n", params.provider.c_str()));
        return;
    }

    //  std::map<std::string, corecvs::DynamicObject> providerParameters;
    for (auto &it: params.providerParameters)
    {
        detector->setParameters(it.first, it.second);
    }
    SYNC_PRINT(("FrameProcessor::setPatternDetectorParameters(): New detector <%s> created\n", params.provider.c_str()));
}
