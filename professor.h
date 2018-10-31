#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include "course.h"
#include "fdp.h"
#include "seminar.h"

using namespace std;

class Course;
class FDP;
class Seminar;
class Professor : public User{
private:
    string _PIC;
    int _numCourses;
    Course *_coursesList;
    int _numFdps;
    FDP *_fdpsList;
    int _numSeminars;
    Seminar *_seminarsList;
public:
    Professor();
    Professor(string,string,int,int,int);
    ~Professor();
    void editCourse();
    void editFDP();
    void editSeminar();
    void setMarks();
};



#endif // PROFESSOR_H
