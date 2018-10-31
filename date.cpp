#include <iostream>
#include "date.h"

Date::Date(){

}
Date::Date(int minute, int hour, int day, int month, int year){
    _minute = minute;
    _hour = hour;
    _day = day;
    _month = month;
    _year = year;
}
Date::~Date(){

}
