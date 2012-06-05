#-------------------------------------------------
#
# Project created by QtCreator 2012-06-03T15:48:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSignalsSlotsBenchmark
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Thread.cpp \
    FakeObject.cpp

HEADERS  += mainwindow.h \
    Thread.h \
    FakeObject.h

FORMS    += mainwindow.ui
