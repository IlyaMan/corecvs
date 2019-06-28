/**
 * \file homorgaphyReconstructorBlockBase.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from bufferFilters.xml
 */

#include <vector>
#include <stddef.h>
#include "homorgaphyReconstructorBlockBase.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
#if 0
template<>
Reflection BaseReflection<HomorgaphyReconstructorBlockBase>::reflection = Reflection();
template<>
int BaseReflection<HomorgaphyReconstructorBlockBase>::dummy = HomorgaphyReconstructorBlockBase::staticInit();
#endif
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int HomorgaphyReconstructorBlockBase::staticInit(corecvs::Reflection *toFill)
{
    if (toFill == NULL || toFill->objectSize != 0) {
        SYNC_PRINT(("staticInit(): Contract Violation in <HomorgaphyReconstructorBlockBase>\n"));
         return -1;
    }

    toFill->name = ReflectionNaming(
        "HomorgaphyReconstructorBlockBase",
        "HomorgaphyReconstructorBlockBase",
        ""
    );

     toFill->objectSize = sizeof(HomorgaphyReconstructorBlockBase);
     

    PointerField* field0 = new PointerField
        (
          HomorgaphyReconstructorBlockBase::IN0_ID,
          offsetof(HomorgaphyReconstructorBlockBase, mIn0),
          NULL,
          "in0",
          "in0",
          "in0",
          "corecvs::CorrespondenceList"
        );
    toFill->fields.push_back(field0);
    /*  */ 
    PointerField* field1 = new PointerField
        (
          HomorgaphyReconstructorBlockBase::OUT0_ID,
          offsetof(HomorgaphyReconstructorBlockBase, mOut0),
          NULL,
          "out0",
          "out0",
          "out0",
          "corecvs::Matrix33"
        );
    toFill->fields.push_back(field1);
    /*  */ 
    EnumField* field2 = new EnumField
        (
          HomorgaphyReconstructorBlockBase::ALGORITHM_ID,
          offsetof(HomorgaphyReconstructorBlockBase, mAlgorithm),
          4,
          "algorithm",
          "algorithm",
          "algorithm",
          new EnumReflection(5
          , new EnumOption(0,"LSE")
          , new EnumOption(1,"LSE1")
          , new EnumOption(2,"LSE2")
          , new EnumOption(3,"ML")
          , new EnumOption(4,"ML_AFTER_LSE")
          )
        );
    field2->widgetHint=BaseField::COMBO_BOX;
    toFill->fields.push_back(field2);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("HomorgaphyReconstructorBlockBase")]= toFill;
   return 0;
}
int HomorgaphyReconstructorBlockBase::relinkCompositeFields()
{
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


