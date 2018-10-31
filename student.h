#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "user.h"
#include "course.h"
#include "fdp.h"
#include "seminar.h"
#include "courses_list.h"
#include "seminars_list.h"

using namespace std;

class Course;
class FDP;
class Seminar;
class CoursesList;
class SeminarsList;
class Student : public User{
private:
    string _SIN;
    string _degree;
    FDP *_myFDP;
    CoursesList *_coursesList;
    SeminarsList *_seminarsList;

public:
    Student();
    Student(string, string, string, FDP*, CoursesList*, SeminarsList*);
    ~Student();
    void joinCourse();
    void joinFDP();
    void joinSeminar();
    void dropCourse();
    void dropFDP();
    void dropSeminar();

};

#endif // STUDENT_H
