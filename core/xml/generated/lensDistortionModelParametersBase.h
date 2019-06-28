#ifndef LENS_DISTORTION_MODEL_PARAMETERS_BASE_H_
#define LENS_DISTORTION_MODEL_PARAMETERS_BASE_H_
/**
 * \file lensDistortionModelParametersBase.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from distortion.xml
 */

#include "core/reflection/reflection.h"
#include "core/reflection/defaultSetter.h"
#include "core/reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief Lens Distortion Model Parameters 
 * 
 * \ingroup distcorrect
 * \brief This structure holds the parameters to correct the image.
 *
 * The intrinsic correction parameters form
 * http://www.vision.caltech.edu/bouguetj/calib_doc/papers/heikkila97.pdf
 *
 * Here are the correction formulas
 *  \f{eqnarray*}
 *  \pmatrix{dx \cr dy} &=& \pmatrix{x \cr y} - \pmatrix{x_c \cr y_c} \\
 *                    r &=& \sqrt{dx^2 + dy^2} \\
 *                 r_{corr} &=& k_1 r^2 + k_2 r^4 \\
 *           \hat{r}_{corr} &=& \sum_{i=1}^{n} k_i r^i \\
 *
 *   \pmatrix{x_{coor}^t \cr y_{coor}^t} &=&
 *   \pmatrix{p_1 dx dy + p_2 (r^2 + 2 dx^2)\cr p_1 (r^2 + 2 dy^2) + p_2 dx dy} \\
 *
 *
 *   \pmatrix{x \cr y} &=&
 *   \pmatrix{x_0 \cr y_0} +
 *   \pmatrix{dx \cr dy} * r_{corr} +
 *   \pmatrix{x_{coor}^t \cr y_{coor}^t}
 *
 *   \f}
 *
 *   For Marquardt-Levenberg algorithm we will need derivatives of the function
 *
 *   for more details please read the code of getCorrectionForPoint() or read the Heikkila paper
     
 **/
class LensDistortionModelParametersBase : public corecvs::BaseReflection<LensDistortionModelParametersBase>
{
public:
    enum FieldId {
        PRINCIPALX_ID,
        PRINCIPALY_ID,
        TANGENTIALX_ID,
        TANGENTIALY_ID,
        KOEFF_ID,
        ASPECT_ID,
        SCALE_ID,
        NORMALIZING_FOCAL_ID,
        SHIFT_X_ID,
        SHIFT_Y_ID,
        MAP_FORWARD_ID,
        LENS_DISTORTION_MODEL_PARAMETERS_BASE_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief principalX 
     * The center of the distortion \f$x_c\f$ 
     */
    double mPrincipalX;

    /** 
     * \brief principalY 
     * The center of the distortion \f$y_c\f$ 
     */
    double mPrincipalY;

    /** 
     * \brief tangentialX 
     * First tangent correction coefficient - \f$p_1\f$ 
     */
    double mTangentialX;

    /** 
     * \brief tangentialY 
     * Second tangent correction coefficient - \f$p_2\f$ 
     */
    double mTangentialY;

    /** 
     * \brief koeff 
     * Polynom to describe radial correction 
     */
    vector<double> mKoeff;

    /** 
     * \brief aspect 
     * aspect 
     */
    double mAspect;

    /** 
     * \brief scale 
     * scale 
     */
    double mScale;

    /** 
     * \brief Normalizing Focal 
     * Normalizing Focal 
     */
    double mNormalizingFocal;

    /** 
     * \brief shift X 
     * Additional shift \f$x_s\f$ 
     */
    double mShiftX;

    /** 
     * \brief shift Y 
     * Additional shift \f$y_s\f$ 
     */
    double mShiftY;

    /** 
     * \brief Map Forward 
     * This one is used to identify map direction, true if undistorted->distorted 
     */
    bool mMapForward;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    double principalX() const
    {
        return mPrincipalX;
    }

    double principalY() const
    {
        return mPrincipalY;
    }

    double tangentialX() const
    {
        return mTangentialX;
    }

    double tangentialY() const
    {
        return mTangentialY;
    }

    vector<double> koeff() const
    {
        return mKoeff;
    }

    double aspect() const
    {
        return mAspect;
    }

    double scale() const
    {
        return mScale;
    }

    double normalizingFocal() const
    {
        return mNormalizingFocal;
    }

    double shiftX() const
    {
        return mShiftX;
    }

    double shiftY() const
    {
        return mShiftY;
    }

    bool mapForward() const
    {
        return mMapForward;
    }

    /* Section with setters */
    void setPrincipalX(double principalX)
    {
        mPrincipalX = principalX;
    }

    void setPrincipalY(double principalY)
    {
        mPrincipalY = principalY;
    }

    void setTangentialX(double tangentialX)
    {
        mTangentialX = tangentialX;
    }

    void setTangentialY(double tangentialY)
    {
        mTangentialY = tangentialY;
    }

    void setKoeff(vector<double> koeff)
    {
        mKoeff = koeff;
    }

    void setAspect(double aspect)
    {
        mAspect = aspect;
    }

    void setScale(double scale)
    {
        mScale = scale;
    }

    void setNormalizingFocal(double normalizingFocal)
    {
        mNormalizingFocal = normalizingFocal;
    }

    void setShiftX(double shiftX)
    {
        mShiftX = shiftX;
    }

    void setShiftY(double shiftY)
    {
        mShiftY = shiftY;
    }

    void setMapForward(bool mapForward)
    {
        mMapForward = mapForward;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mPrincipalX,                static_cast<const corecvs::DoubleField *>(fields()[PRINCIPALX_ID]));
        visitor.visit(mPrincipalY,                static_cast<const corecvs::DoubleField *>(fields()[PRINCIPALY_ID]));
        visitor.visit(mTangentialX,               static_cast<const corecvs::DoubleField *>(fields()[TANGENTIALX_ID]));
        visitor.visit(mTangentialY,               static_cast<const corecvs::DoubleField *>(fields()[TANGENTIALY_ID]));
        visitor.visit(mKoeff,                     static_cast<const corecvs::DoubleVectorField *>(fields()[KOEFF_ID]));
        visitor.visit(mAspect,                    static_cast<const corecvs::DoubleField *>(fields()[ASPECT_ID]));
        visitor.visit(mScale,                     static_cast<const corecvs::DoubleField *>(fields()[SCALE_ID]));
        visitor.visit(mNormalizingFocal,          static_cast<const corecvs::DoubleField *>(fields()[NORMALIZING_FOCAL_ID]));
        visitor.visit(mShiftX,                    static_cast<const corecvs::DoubleField *>(fields()[SHIFT_X_ID]));
        visitor.visit(mShiftY,                    static_cast<const corecvs::DoubleField *>(fields()[SHIFT_Y_ID]));
        visitor.visit(mMapForward,                static_cast<const corecvs::BoolField *>(fields()[MAP_FORWARD_ID]));
    }

    LensDistortionModelParametersBase()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    LensDistortionModelParametersBase(
          double principalX
        , double principalY
        , double tangentialX
        , double tangentialY
        , vector<double> koeff
        , double aspect
        , double scale
        , double normalizingFocal
        , double shiftX
        , double shiftY
        , bool mapForward
    )
    {
        mPrincipalX = principalX;
        mPrincipalY = principalY;
        mTangentialX = tangentialX;
        mTangentialY = tangentialY;
        mKoeff = koeff;
        mAspect = aspect;
        mScale = scale;
        mNormalizingFocal = normalizingFocal;
        mShiftX = shiftX;
        mShiftY = shiftY;
        mMapForward = mapForward;
    }

    bool operator ==(const LensDistortionModelParametersBase &other) const 
    {
        if ( !(this->mPrincipalX == other.mPrincipalX)) return false;
        if ( !(this->mPrincipalY == other.mPrincipalY)) return false;
        if ( !(this->mTangentialX == other.mTangentialX)) return false;
        if ( !(this->mTangentialY == other.mTangentialY)) return false;
        if ( !(this->mKoeff == other.mKoeff)) return false;
        if ( !(this->mAspect == other.mAspect)) return false;
        if ( !(this->mScale == other.mScale)) return false;
        if ( !(this->mNormalizingFocal == other.mNormalizingFocal)) return false;
        if ( !(this->mShiftX == other.mShiftX)) return false;
        if ( !(this->mShiftY == other.mShiftY)) return false;
        if ( !(this->mMapForward == other.mMapForward)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, LensDistortionModelParametersBase &toSave)
    {
        corecvs::PrinterVisitor printer(out);
        toSave.accept<corecvs::PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        std::cout << *this;
    }
};
#endif  //LENS_DISTORTION_MODEL_PARAMETERS_BASE_H_
