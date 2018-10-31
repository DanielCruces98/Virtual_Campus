#include <iostream>
#include "courses_list.h"

CoursesList::CoursesList(){

}
CoursesList::CoursesList(int n){
    _n = n;
    _cu = new Course[_n];
}
CoursesList::~CoursesList(){
    delete[] _cu;
}
