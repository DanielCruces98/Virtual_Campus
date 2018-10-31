#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "resource.h"
#include "professor.h"
#include "students_list.h"

using namespace std;

class Professor;
class StudentsList;
class Course : public Resource{
private:
    string _degree;
    int _credits;
    Professor *_professor1;
    Professor *_professor2;
    StudentsList *_studentsList;
    float *_marksList;
public:
    Course();
    Course(string, int, string, int, Professor*, Professor*, StudentsList*);
    ~Course();
    void display();
};

#endif // COURSE_H
