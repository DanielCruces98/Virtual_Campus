#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User{
protected:
    string _password;
public:
    User();
    User(string);
    ~User();
    void login();
    void changePassword();
};

#endif // USER_H
