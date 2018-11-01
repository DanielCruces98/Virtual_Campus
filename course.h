#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "student.h"

using namespace std;

class Resource{
friend class Student;
protected:
    string name;
public:
    Resource();
    Resource(string);
    virtual ~Resource();
    virtual void display() = 0;
};

class Student;
class User;
class Course : public Resource{
friend class Student;
friend class User;
private:
    int num;
    User *myStudent;
public:
    Course();
    Course(string,int,User*);
    ~Course();
    Course &operator =(const Course &C);
    void display();
};



#endif // COURSE_H
