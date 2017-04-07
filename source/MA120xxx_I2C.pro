
#-------------------------------------------------------------------------------
# Copyright Merus Audio 2016
# Author: Rien Oortgiesen
#
# Description: Project for creation of GUI for MA120xxx devices
# Older GUI versions exist but are not under version control.
# This GUI project attempts to inheret succesful older GUI functionality
# combined with new functionality. Revision comments can be found in rev. control.
#
# Current Release version: 6.5.1 (DevelopX development version)
#--------------------------------------------------------------------------------


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MA120xx_GUI
TEMPLATE = app

CONFIG+= static


SOURCES += main.cpp\
        devicecontrol.cpp \
    scom.cpp \
    newwindow.cpp \
    registerbrowser.cpp \
    csvreader.cpp \
    customwidget.cpp \
    dasetupdialog.cpp \
    qslider_user.cpp \
    register_conteiner.cpp \
    qscomthreadsave.cpp \
    qpushbutton_user.cpp \
    qcheckbox_user.cpp \
    qwidjetpainter.cpp \
    quser_dial.cpp \
    moderegisterbrouser_short.cpp \
    qthread_readreg.cpp \
    register_conteiner_error_vector.cpp \
    about_window.cpp \
    register_conteiner_error_table.cpp

HEADERS  += devicecontrol.h \
    scom.h \
    newwindow.h \
    registerbrowser.h \
    customwidget.h \
    regmap.h \
    dasetupdialog.h \
    regbrowfilldata.h \
    fusemap.h \
    qslider_user.h \
    devicecontrol_tooltipe.h \
    register_conteiner.h \
    qscomthreadsave.h \
    qpushbutton_user.h \
    qcheckbox_user.h \
    qwidjetpainter.h \
    quser_dial.h \
    moderegisterbrouser_short.h \
    qthread_readreg.h \
    register_conteiner_error_vector.h \
    about_window_text.h \
    about_window.h \
    register_conteiner_error_table.h \
    merus_mode_reg_definition.h \
    error_reg_description.h \
    merus_register_address_description.h

FORMS    += devicecontrol.ui \
    newwindow.ui \
    dasetupdialog.ui \
    registerbrowser.ui \
    register_conteiner.ui \
    qwidjetpainter.ui \
    quser_dial.ui \
    moderegisterbrouser_short.ui \
    register_conteiner_error_vector.ui \
    about_window.ui \
    register_conteiner_error_table.ui

LIBS += -L$$quote($$PWD/lib) -lftd2xx

RESOURCES += \
    Resources.qrc


