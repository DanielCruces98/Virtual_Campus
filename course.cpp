#include "course.h"

using namespace std;

Course::Course(){

}
Course::Course(string id, int status, string degree, int credits, Professor* professor1,
               Professor* professor2, StudentsList* studentsList) : Resource(id,status){
    _degree = degree;
    _credits = credits;
    _professor1 = professor1;
    _professor2 = professor2;
    _studentsList = studentsList;
}
Course::~Course(){

}
void Course::display(){


}
