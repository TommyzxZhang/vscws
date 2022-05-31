#ifndef VEGIE
#define VEGIE
#include <iostream>
#include "animal.h"
using namespace std;

class vegie :public animal {
public:
    void get_name();
    string get_favo();
    void set_favo(string fav);
private:
    vegie(string n, int v);      // create a vegie with name n and body volume v
    string favourite_food;     // the vegie's favourite food, initialise to "grass"
    static int nextID;
};
#endif

