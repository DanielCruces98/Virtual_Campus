#include <iostream>
#include "students_list.h"

StudentsList::StudentsList(){

}
StudentsList::StudentsList(int n){
    _n = n;
    _st = new Student[_n];
}
StudentsList::~StudentsList(){
    delete[] _st;
}
