#ifndef COURSES_LIST_H
#define COURSES_LIST_H

#include <iostream>
#include "course.h"

using namespace std;

class Course;
class CoursesList{
private:
    int _n;
    Course *_cu;
public:
    CoursesList();
    CoursesList(int);
    ~CoursesList();
};

#endif // COURSES_LIST_H
