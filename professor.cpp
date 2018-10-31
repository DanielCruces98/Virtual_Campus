#include <iostream>
#include "professor.h"

Professor::Professor(){

}
Professor::Professor(string password, string PIC, int numCouses,int numFdps, int numSeminars) : User(password){
    _PIC = PIC;
    _numCourses = numCouses;
    _coursesList = new Course[_numCourses];
    _numFdps = numFdps;
    _fdpsList = new FDP[_numFdps];
    _numSeminars = numSeminars;
    _seminarsList = new Seminar[_numSeminars];
}
Professor::~Professor(){

}
void Professor::editCourse(){

}
void Professor::editFDP(){

}
void Professor::editSeminar(){

}
void Professor::setMarks(){

}
