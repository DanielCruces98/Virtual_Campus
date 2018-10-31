#include <iostream>
#include "seminars_list.h"

SeminarsList::SeminarsList(){

}
SeminarsList::SeminarsList(int n){
    _n = n;
    _se = new Seminar[_n];
}
SeminarsList::~SeminarsList(){
    delete[] _se;
}
