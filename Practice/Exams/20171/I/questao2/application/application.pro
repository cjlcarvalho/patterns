QT += core
QT -= gui

CONFIG += c++11

TARGET = application
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-core-Desktop-Debug/release/ -lcore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-core-Desktop-Debug/debug/ -lcore
else:unix: LIBS += -L$$PWD/../build-core-Desktop-Debug/ -lcore

INCLUDEPATH += $$PWD/../build-core-Desktop-Debug
DEPENDPATH += $$PWD/../build-core-Desktop-Debug

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-EditorFramework-Desktop-Debug/release/ -lEditorFramework
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-EditorFramework-Desktop-Debug/debug/ -lEditorFramework
else:unix: LIBS += -L$$PWD/../build-EditorFramework-Desktop-Debug/ -lEditorFramework

INCLUDEPATH += $$PWD/../build-EditorFramework-Desktop-Debug
DEPENDPATH += $$PWD/../build-EditorFramework-Desktop-Debug
