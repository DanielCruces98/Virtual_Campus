#include <iostream>
#include "header.h"

using namespace std;


int main()
{
    Base *ptr;
    Derived objderived;
    ptr = &objderived;
    ptr->display();
    ptr->show();


    return 0;
}
