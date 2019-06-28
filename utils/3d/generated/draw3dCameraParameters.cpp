/**
 * \file draw3dCameraParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from draw3d.xml
 */

#include <vector>
#include <stddef.h>
#include "draw3dCameraParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
#if 0
template<>
Reflection BaseReflection<Draw3dCameraParameters>::reflection = Reflection();
template<>
int BaseReflection<Draw3dCameraParameters>::dummy = Draw3dCameraParameters::staticInit();
#endif
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int Draw3dCameraParameters::staticInit(corecvs::Reflection *toFill)
{
    if (toFill == NULL || toFill->objectSize != 0) {
        SYNC_PRINT(("staticInit(): Contract Violation in <Draw3dCameraParameters>\n"));
         return -1;
    }

    toFill->name = ReflectionNaming(
        "draw 3d Camera Parameters",
        "draw 3d Camera Parameters",
        ""
    );

     toFill->objectSize = sizeof(Draw3dCameraParameters);
     

    DoubleField* field0 = new DoubleField
        (
          Draw3dCameraParameters::FOVH_ID,
          offsetof(Draw3dCameraParameters, mFovH),
          90,
          "fovH",
          "fovH",
          "fovH",
          true,
         0,
         180,
         1
        );
    field0->widgetHint=BaseField::SPIN_BOX;
    field0->precision=2;
    toFill->fields.push_back(field0);
    /*  */ 
    DoubleField* field1 = new DoubleField
        (
          Draw3dCameraParameters::FOVV_ID,
          offsetof(Draw3dCameraParameters, mFovV),
          60,
          "fovV",
          "fovV",
          "fovV",
          true,
         0,
         180,
         1
        );
    field1->widgetHint=BaseField::SPIN_BOX;
    field1->precision=2;
    toFill->fields.push_back(field1);
    /*  */ 
    DoubleField* field2 = new DoubleField
        (
          Draw3dCameraParameters::NEARPLANE_ID,
          offsetof(Draw3dCameraParameters, mNearPlane),
          10,
          "nearPlane",
          "nearPlane",
          "nearPlane",
          true,
         0,
         20000,
         1
        );
    field2->widgetHint=BaseField::SPIN_BOX;
    field2->precision=2;
    toFill->fields.push_back(field2);
    /*  */ 
    DoubleField* field3 = new DoubleField
        (
          Draw3dCameraParameters::FARPLANE_ID,
          offsetof(Draw3dCameraParameters, mFarPlane),
          100,
          "farPlane",
          "farPlane",
          "farPlane",
          true,
         0,
         20000,
         1
        );
    field3->widgetHint=BaseField::SPIN_BOX;
    field3->precision=2;
    toFill->fields.push_back(field3);
    /*  */ 
    EnumField* field4 = new EnumField
        (
          Draw3dCameraParameters::STYLE_ID,
          offsetof(Draw3dCameraParameters, mStyle),
          3,
          "style",
          "style",
          "style",
          new EnumReflection(5
          , new EnumOption(0,"Points")
          , new EnumOption(1,"Wireframe")
          , new EnumOption(2,"Color")
          , new EnumOption(3,"Color 2")
          , new EnumOption(4,"Textured")
          )
        );
    field4->widgetHint=BaseField::COMBO_BOX;
    toFill->fields.push_back(field4);
    /*  */ 
    CompositeField* field5 = new CompositeField
        (
          Draw3dCameraParameters::POINT_COLOR_ID,
          offsetof(Draw3dCameraParameters, mPointColor),
          "Point Color",
          "RgbColorParameters",
          "Point Color",
          "Point Color",
           NULL
        );
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             field5->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    toFill->fields.push_back(field5);
    /*  */ 
    BoolField* field6 = new BoolField
        (
          Draw3dCameraParameters::POINT_COLOR_OVERRIDE_ID,
          offsetof(Draw3dCameraParameters, mPointColorOverride),
          false,
          "Point Color Override",
          "Point Color Override",
          "Point Color Override"
        );
    field6->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field6);
    /*  */ 
    IntField* field7 = new IntField
        (
          Draw3dCameraParameters::POINT_SIZE_ID,
          offsetof(Draw3dCameraParameters, mPointSize),
          1,
          "Point Size",
          "Point Size",
          "Point Size",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field7);
    /*  */ 
    CompositeField* field8 = new CompositeField
        (
          Draw3dCameraParameters::EDGE_COLOR_ID,
          offsetof(Draw3dCameraParameters, mEdgeColor),
          "Edge Color",
          "RgbColorParameters",
          "Edge Color",
          "Edge Color",
           NULL
        );
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             field8->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    toFill->fields.push_back(field8);
    /*  */ 
    BoolField* field9 = new BoolField
        (
          Draw3dCameraParameters::EDGE_COLOR_OVERRIDE_ID,
          offsetof(Draw3dCameraParameters, mEdgeColorOverride),
          false,
          "Edge Color Override",
          "Edge Color Override",
          "Edge Color Override"
        );
    field9->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field9);
    /*  */ 
    IntField* field10 = new IntField
        (
          Draw3dCameraParameters::EDGE_WIDTH_ID,
          offsetof(Draw3dCameraParameters, mEdgeWidth),
          1,
          "Edge Width",
          "Edge Width",
          "Edge Width",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field10);
    /*  */ 
    CompositeField* field11 = new CompositeField
        (
          Draw3dCameraParameters::FACE_COLOR_ID,
          offsetof(Draw3dCameraParameters, mFaceColor),
          "Face Color",
          "RgbColorParameters",
          "Face Color",
          "Face Color",
           NULL
        );
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             field11->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    toFill->fields.push_back(field11);
    /*  */ 
    BoolField* field12 = new BoolField
        (
          Draw3dCameraParameters::FACE_COLOR_OVERRIDE_ID,
          offsetof(Draw3dCameraParameters, mFaceColorOverride),
          false,
          "Face Color Override",
          "Face Color Override",
          "Face Color Override"
        );
    field12->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field12);
    /*  */ 
    BoolField* field13 = new BoolField
        (
          Draw3dCameraParameters::SHOW_CAPTION_ID,
          offsetof(Draw3dCameraParameters, mShowCaption),
          false,
          "Show caption",
          "Show caption",
          "Show caption"
        );
    field13->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field13);
    /*  */ 
    IntField* field14 = new IntField
        (
          Draw3dCameraParameters::FONT_SIZE_ID,
          offsetof(Draw3dCameraParameters, mFontSize),
          8,
          "Font Size",
          "Font Size",
          "Font Size",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field14);
    /*  */ 
    IntField* field15 = new IntField
        (
          Draw3dCameraParameters::FONT_WIDTH_ID,
          offsetof(Draw3dCameraParameters, mFontWidth),
          1,
          "Font Width",
          "Font Width",
          "Font Width",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field15);
    /*  */ 
    CompositeField* field16 = new CompositeField
        (
          Draw3dCameraParameters::FONT_COLOR_ID,
          offsetof(Draw3dCameraParameters, mFontColor),
          "Font Color",
          "RgbColorParameters",
          "Font Color",
          "Font Color",
           NULL
        );
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             field16->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    toFill->fields.push_back(field16);
    /*  */ 
    EnumField* field17 = new EnumField
        (
          Draw3dCameraParameters::TEXTURE_CORRODINATES_ID,
          offsetof(Draw3dCameraParameters, mTextureCorrodinates),
          0,
          "Texture Corrodinates",
          "Texture Corrodinates",
          "Texture Corrodinates",
          new EnumReflection(3
          , new EnumOption(0,"No Texture")
          , new EnumOption(1,"Auto Decide")
          , new EnumOption(2,"Force Texture")
          )
        );
    field17->widgetHint=BaseField::COMBO_BOX;
    toFill->fields.push_back(field17);
    /*  */ 
    IntField* field18 = new IntField
        (
          Draw3dCameraParameters::TEXTURE_ALPHA_ID,
          offsetof(Draw3dCameraParameters, mTextureAlpha),
          255,
          "Texture Alpha",
          "Texture Alpha",
          "Texture Alpha",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field18);
    /*  */ 
    DoubleField* field19 = new DoubleField
        (
          Draw3dCameraParameters::TEXTURE_SCALE_ID,
          offsetof(Draw3dCameraParameters, mTextureScale),
          1,
          "Texture Scale",
          "Texture Scale",
          "Texture Scale",
          true,
         0,
         2000,
         1
        );
    field19->widgetHint=BaseField::SPIN_BOX;
    field19->precision=2;
    toFill->fields.push_back(field19);
    /*  */ 
    IntField* field20 = new IntField
        (
          Draw3dCameraParameters::DECAL_MATRIX_TYPE_ID,
          offsetof(Draw3dCameraParameters, mDecalMatrixType),
          11,
          "Decal Matrix Type",
          "Decal Matrix Type",
          "Decal Matrix Type",
          true,
         0,
         19,
         1
        );
    toFill->fields.push_back(field20);
    /*  */ 
    BoolField* field21 = new BoolField
        (
          Draw3dCameraParameters::DECAL_LEFT_CAM_ID,
          offsetof(Draw3dCameraParameters, mDecalLeftCam),
          false,
          "Decal Left Cam",
          "Decal Left Cam",
          "Decal Left Cam"
        );
    field21->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field21);
    /*  */ 
    IntField* field22 = new IntField
        (
          Draw3dCameraParameters::DECAL_LEFT_ALPHA_ID,
          offsetof(Draw3dCameraParameters, mDecalLeftAlpha),
          255,
          "Decal Left Alpha",
          "Decal Left Alpha",
          "Decal Left Alpha",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field22);
    /*  */ 
    BoolField* field23 = new BoolField
        (
          Draw3dCameraParameters::DECAL_RIGHT_CAM_ID,
          offsetof(Draw3dCameraParameters, mDecalRightCam),
          false,
          "Decal Right Cam",
          "Decal Right Cam",
          "Decal Right Cam"
        );
    field23->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field23);
    /*  */ 
    IntField* field24 = new IntField
        (
          Draw3dCameraParameters::DECAL_RIGHT_ALPHA_ID,
          offsetof(Draw3dCameraParameters, mDecalRightAlpha),
          255,
          "Decal Right Alpha",
          "Decal Right Alpha",
          "Decal Right Alpha",
          true,
         0,
         255,
         1
        );
    toFill->fields.push_back(field24);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("draw 3d Camera Parameters")]= toFill;
   return 0;
}
int Draw3dCameraParameters::relinkCompositeFields()
{
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             const CompositeField* field = static_cast<const CompositeField*>(getReflection()->fields[5]);
             const_cast<CompositeField*>(field)->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             const CompositeField* field = static_cast<const CompositeField*>(getReflection()->fields[8]);
             const_cast<CompositeField*>(field)->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             const CompositeField* field = static_cast<const CompositeField*>(getReflection()->fields[11]);
             const_cast<CompositeField*>(field)->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("rgb Color Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             const CompositeField* field = static_cast<const CompositeField*>(getReflection()->fields[16]);
             const_cast<CompositeField*>(field)->reflection = it->second;
        } else {
             printf("Reflection Draw3dCameraParameters to the subclass rgb Color Parameters can't be linked\n");
        }
    }
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


