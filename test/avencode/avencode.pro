# try use global config
exists(../../../../config.pri) {
    ROOT_DIR=../../../..
    #message(Using global config)
    include($$ROOT_DIR/config.pri)
} else { 
    #message(Using local config)
    ROOT_DIR=../..
    include($$ROOT_DIR/cvs-config.pri)
}
ROOT_DIR=$$PWD/$$ROOT_DIR

DESTDIR = $$ROOT_DIR/bin
OBJECTS_DIR = $$ROOT_DIR/.obj/$$TARGET_ORIG$$BUILD_CFG_NAME

TEMPLATE = app
TARGET   = test_avencode

include($$PWD/../../core/core.pri)

with_avcodec {
    !build_pass: message(Switching on avcodec support)
    !build_pass: message(Switching on swscale support)

    AVCODEC_WRAPPER_DIR = ../../wrappers/avcodec
    include($$AVCODEC_WRAPPER_DIR/avcodec.pri)
}

SOURCES += main_avencode.cpp
