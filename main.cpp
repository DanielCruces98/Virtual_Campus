#include <iostream>
#include <string>
#include "student.h"
#include "course.h"
using namespace std;

int main(){

    Resource *c2;
    User *s1= new Student("Luis",20,c2);
    Resource *c3= new Course("Analogica",6,s1);
    //s1->setStudent("Luis",20,c3);

    s1->display();
    cout<<"\n";
    //c3->display();

    return 0;
}

