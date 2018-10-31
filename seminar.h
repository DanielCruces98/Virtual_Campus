#ifndef SEMINAR_H
#define SEMINAR_H

#include <iostream>
#include "resource.h"
#include "student.h"
#include "professor.h"
#include "date.h"

using namespace std;

class Date;
class Student;
class Professor;
class Seminar : public Resource{
private:
    Professor *_coordinator;
    Professor *_speaker;
    int _seats;
    int _numParticipants;
    Student *_participantsList;
    Date *_date;
public:
    Seminar();
    Seminar(string, int, Professor*, Professor*, int, int, Date*);
    ~Seminar();

};

#endif // SEMINAR_H
