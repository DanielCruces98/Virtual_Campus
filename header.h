#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

class Base{
public:
    virtual void display() = 0;
    void show();
};
class Derived : public Base{
public:
    void display();
    void show();
};


#endif // HEADER_H
