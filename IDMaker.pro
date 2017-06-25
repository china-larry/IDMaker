#-------------------------------------------------
#
# Project created by QtCreator 2017-06-23T14:37:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IDMaker
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    CNatureTempletWidget/CProjectInfoWidget.cpp \
    CNatureTempletWidget/CProjectKindWidget.cpp \
    OneProjectWidget/COneProWidget.cpp \
    CQualityTempletWidget/CQualityPeakWidget.cpp \
    CNatureTempletWidget/CNaturePeakWidget.cpp \
    MoreProjectWidget/CMoreProjectWidget.cpp \
    NatureProjectWidget/CNatureProjectWidget.cpp \
    CNatureTempletWidget/CBasisDataWidget.cpp \
    CGeneralWidget/CLabelLineEditWidget.cpp \
    CGeneralWidget/CLabelComboxWidget.cpp \
    CNatureTempletWidget/CFC2PeakWidget.cpp \
    CNatureTempletWidget/CFC2SectionWidget.cpp \
    CNatureTempletWidget/CFCPlusPeakWidget.cpp \
    CNatureTempletWidget/CFC2TableWidget.cpp

HEADERS  += mainwindow.h \
    CNatureTempletWidget/CProjectInfoWidget.h \
    CNatureTempletWidget/CProjectKindWidget.h \
    OneProjectWidget/COneProWidget.h \
    CQualityTempletWidget/CQualityPeakWidget.h \
    CNatureTempletWidget/CNaturePeakWidget.h \
    MoreProjectWidget/CMoreProjectWidget.h \
    NatureProjectWidget/CNatureProjectWidget.h \
    CNatureTempletWidget/CBasisDataWidget.h \
    CGeneralWidget/CLabelLineEditWidget.h \
    CGeneralWidget/CLabelComboxWidget.h \
    CNatureTempletWidget/CFC2PeakWidget.h \
    CNatureTempletWidget/CFC2SectionWidget.h \
    CNatureTempletWidget/CFCPlusPeakWidget.h \
    CNatureTempletWidget/CFC2TableWidget.h

FORMS    += mainwindow.ui
