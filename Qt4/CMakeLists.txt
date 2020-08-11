cmake_minimum_required(VERSION 2.8)
PROJECT( QtDemo )


FIND_PACKAGE(Qt4 REQUIRED)

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})



SET(ImageViewer_SOURCES src/main.cpp src/qtdemo.cpp )
SET(ImageViewer_HEADERS src/qtdemo.h  src/ui_qtdemo.h)
SET(ImageViewer_FORMS src/qtdemo.ui)

SET(example_form_SOURCE src/main.cpp src/example_form.cpp)
SET(example_form_HEADERS src/example_form.h)
SET(example_form_FORMS src/example_form.ui)

QT4_WRAP_CPP(ImageViewer_HEADERS_MOC ${ImageViewer_HEADERS})
QT4_WRAP_UI(ImageViewer_FORMS_HEADERS ${ImageViewer_FORMS})
QT4_ADD_RESOURCES(ImageViewer_RESOURCES_RCC ${ImageViewer_RESOURCES})


QT4_WRAP_CPP(example_form_HEADERS_MOC ${example_form_HEADERS})
QT4_WRAP_UI(example_form_HEADERS ${example_form_FORMS})
QT4_ADD_RESOURCES(example_form_RESOURCES_RCC ${example_form_RESOURCES})



ADD_EXECUTABLE(qtdemo ${ImageViewer_SOURCES} ${ImageViewer_HEADERS_MOC} ${ImageViewer_FORMS_HEADERS} )
TARGET_LINK_LIBRARIES( qtdemo ${QT_LIBRARIES} )


#ADD_EXECUTABLE(example_form ${example_form_SOURCES} ${example_form_HEADERS_MOC} ${example_form_FORMS_HEADERS} )
#TARGET_LINK_LIBRARIES( example_form  ${QT_LIBRARIES} )
