TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    course.cpp \
    student.cpp \
    fdp.cpp \
    seminar.cpp \
    administrator.cpp \
    professor.cpp \
    resource.cpp \
    user.cpp \
    date.cpp \
    courses_list.cpp \
    seminars_list.cpp \
    students_list.cpp \
    virtual_campus.cpp

HEADERS += \
    student.h \
    course.h \
    fdp.h \
    seminar.h \
    administrator.h \
    professor.h \
    resource.h \
    user.h \
    date.h \
    courses_list.h \
    seminars_list.h \
    students_list.h \
    virtual_campus.h
