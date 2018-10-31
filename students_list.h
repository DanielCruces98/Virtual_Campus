#ifndef STUDENTS_LIST_H
#define STUDENTS_LIST_H

#include <iostream>
#include "student.h"

using namespace std;

class StudentsList{
private:
    int _n;
    Student *_st;
public:
    StudentsList();
    StudentsList(int);
    ~StudentsList();
};

#endif // STUDENTS_LIST_H
