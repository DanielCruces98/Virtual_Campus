#include "course.h"

using namespace std;

FDP::FDP(){

}
FDP::FDP(string id, int status, string degree, Professor* tutor, Professor* cotutor,
         Student* student) : Resource(id,status){
    _degree = degree;
    _tutor = tutor;
    _cotutor = cotutor;
    _student = student;
}
FDP::~FDP(){

}


