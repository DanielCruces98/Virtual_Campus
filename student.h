#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "course.h"
using namespace std;

class User{
friend class Course;
protected:
    string name;
public:
    User();
    User(string);
    virtual~User();
    virtual void display() = 0;
};

class Course;

class Student : public User{
friend class Course;
friend class Resource;
private:
    int age;
    Resource *myCourse;
public:
    Student();
    Student(string, int,Resource*);
    ~Student();
    Student &operator =(const Student &S);
    void setStudent(string,int,Course*);
    void display();

};



#endif // STUDENT_H
