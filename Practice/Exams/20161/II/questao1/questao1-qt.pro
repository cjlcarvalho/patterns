QT += core
QT -= gui

CONFIG += c++11

TARGET = questao1-qt
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    icomponent.cpp \
    composite.cpp \
    decorator.cpp \
    logdecorator.cpp \
    twitterdecorator.cpp \
    queijo.cpp \
    arroz.cpp

HEADERS += \
    icomponent.h \
    composite.h \
    decorator.h \
    logdecorator.h \
    twitterdecorator.h \
    queijo.h \
    arroz.h
