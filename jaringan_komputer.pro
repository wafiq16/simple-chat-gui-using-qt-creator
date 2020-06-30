#-------------------------------------------------
#
# Project created by QtCreator 2020-06-11T14:25:47
#
#-------------------------------------------------

QT       += core gui
QT      += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = jaringan_komputer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += c++11

QMAKE_CXXFLAGS += -std=c++11
