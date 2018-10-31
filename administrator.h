#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <iostream>
#include "user.h"

using namespace std;

class Administrator : public User{
private:
    string _PIC;
public:
    Administrator();
    Administrator(string,string);
    ~Administrator();
    void createResource();
    void deleteResource();
    void editResource();
};


#endif // ADMINISTRATOR_H
