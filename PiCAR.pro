#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T11:56:54
#
#-------------------------------------------------

include(lib/QMapControl/QMapControl.pri)
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PiCAR
TEMPLATE = app

DEPENDPATH += src

SOURCES +=  src/main.cpp\
            src/mainwindow.cpp \
            src/gps.cpp \
            src/carte.cpp \
            src/gpsstatus.cpp

HEADERS  += src/mainwindow.h \
            src/gps.h \
            src/carte.h \
            src/gpsstatus.h

FORMS    += src/mainwindow.ui \
            src/carte.ui \
            src/gpsstatus.ui
