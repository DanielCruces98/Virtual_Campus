#ifndef SEMINARS_LIST_H
#define SEMINARS_LIST_H

#include <iostream>
#include "seminar.h"

using namespace std;

class SeminarsList{
private:
    int _n;
    Seminar *_se;
public:
    SeminarsList();
    SeminarsList(int);
    ~SeminarsList();
};


#endif // SEMINARS_LIST_H
