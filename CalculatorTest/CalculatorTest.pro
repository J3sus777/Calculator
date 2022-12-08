include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../Calculator.cpp \
        ../Exception.cpp \
        ../Interface.cpp \
        ../SearchBKT.cpp \
        main.cpp

INCLUDEPATH += "../"


SUBDIRS += \
    ../TermCalculator.pro

HEADERS += \
    ../Calculator.h \
    ../Exception.h \
    ../Interface.h \
    ../SearchBKT.h
