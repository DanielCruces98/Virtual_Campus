#include <iostream>
#include "resource.h"

using namespace std;

Resource::Resource(){

}
Resource::Resource(string id,int status){
    _id = id;
    _status = status;
}
Resource::~Resource(){

}
void Resource::display(){
    cout<<"id : "<<_id<<endl;
    cout<<"status: "<<_status<<endl;
}
