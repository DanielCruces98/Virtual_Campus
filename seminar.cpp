#include <iostream>
#include "seminar.h"

Seminar::Seminar(){

}
Seminar::Seminar(string id, int status, Professor* coordinator, Professor* speaker, int seats,
                 int numParticipants, Date* date) : Resource(id,status){
    _coordinator = coordinator;
    _speaker = speaker;
    _seats = seats;
    _numParticipants = numParticipants;
    _participantsList = new Student[numParticipants];
    _date = date;
}
Seminar::~Seminar(){

}
