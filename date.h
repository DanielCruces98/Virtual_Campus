#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date{
private:
    int _minute;
    int _hour;
    int _day;
    int _month;
    int _year;
public:
    Date();
    Date(int,int,int,int,int);
    ~Date();
};

#endif // DATE_H
