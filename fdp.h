#ifndef FDP_H
#define FDP_H

#include <iostream>
#include "resource.h"
#include "student.h"
#include "professor.h"

using namespace std;

class Student;
class Professor;
class FDP : public Resource{
private:
    string _degree;
    Professor *_tutor;
    Professor *_cotutor;
    Student *_student;
public:
    FDP();
    FDP(string, int, string, Professor*, Professor*, Student*);
    ~FDP();
};


#endif // FDP_H
