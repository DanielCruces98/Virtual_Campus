#include <iostream>
#include "administrator.h"

Administrator::Administrator(){

}
Administrator::Administrator(string PIC, string password) : User(password){
    _PIC = PIC;
}
Administrator::~Administrator(){

}
void Administrator::createResource(){

}
void Administrator::deleteResource(){

}
void Administrator::editResource(){

}
