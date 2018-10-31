#ifndef RESOURCE_H
#define RESOURCE_H

#include <iostream>

using namespace std;

class Resource{
protected:
    string _id;
    int _status;
public:
    Resource();
    Resource(string,int);
    ~Resource();
    void display();
};

#endif // RESOURCE_H
