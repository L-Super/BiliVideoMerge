cmake_minimum_required(VERSION 3.5)
message("----- cmake begin -----")
project(BiliVideoMergeTool VERSION 1.0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(HEADER BiliWidget.h )

set(SRC
    main.cpp
    BiliWidget.cpp
)

set(UIFILE BiliWidget.ui)

set(PROJECT_SOURCES
    ${SRC}
    ${HEADER}
    ${UIFILE}
)

message("Qt Version " ${QT_VERSION})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BiliVideoMergeTool
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET BiliVideoMergeTool APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(BiliVideoMergeTool SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(BiliVideoMergeTool
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(BiliVideoMergeTool PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(BiliVideoMergeTool PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BiliVideoMergeTool)
endif()

message("----- cmake end -----")
