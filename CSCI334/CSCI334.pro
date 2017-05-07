#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T13:49:40
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CSCI334
TEMPLATE = app


SOURCES += main.cpp\
        log_in.cpp \
    register.cpp \
    hhomepage.cpp \
    search.cpp \
    viewissue.cpp \
    showcommit.cpp \
    searchcommit.cpp

HEADERS  += log_in.h \
    register.h \
    hhomepage.h \
    search.h \
    viewissue.h \
    showcommit.h \
    searchcommit.h

FORMS    += log_in.ui \
    register.ui \
    hhomepage.ui \
    search.ui \
    viewissue.ui \
    showcommit.ui \
    searchcommit.ui
