#include <iostream>
#include "student.h"

User::User(){}
User::User(string n){
    name = n;
}
User::~User(){}
Student::Student(){}
Student::Student(string n, int a, Resource *C):User(n){
    //myCourse= new Course;
    age = a;
    C = new Course;
    myCourse = C;
}
Student &Student::operator =(const Student &S){
    name = S.name;
    age = S.age;
    return *this;
}
Student::~Student(){}
void Student::setStudent(string n,int a,Course*c){
    name = n;
    age = a;
    myCourse =c;
}
void Student::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Course name: "<<myCourse->name<<endl;
    cout<<"Num: ";
}
Resource::Resource(){}
Resource::Resource(string n){
    name = n;
}
Resource::~Resource(){}
Course::Course(){}
Course::Course(string n, int q, User *s):Resource(n){
    num = q;
    s = new Student;
    myStudent = s;
}
Course &Course::operator =(const Course &C){
    name = C.name;
    num = C.num;
    return *this;
}
Course::~Course(){}
void Course::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Num: "<<num<<endl;
   // cout<<"Student name: "<<myStudent->name<<endl;
    //cout<<"Student age: "<<myStudent->age<<endl;
}
