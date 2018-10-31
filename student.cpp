#include <iostream>
#include "student.h"

Student::Student(){

}
Student::Student(string password, string SIN,string degree, FDP* myFDP, CoursesList* coursesList,
                 SeminarsList* seminarsList) : User(password){
    _password = password;
    _SIN = SIN;
    _degree = degree;
    _myFDP = myFDP;
    _coursesList = coursesList;
    _seminarsList = seminarsList;
}
Student::~Student(){

}
void Student::joinCourse(){

}
void Student::joinFDP(){

}
void Student::joinSeminar(){

}
void Student::dropCourse(){

}
void Student::dropFDP(){

}
void Student::dropSeminar(){

}
