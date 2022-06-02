#ifndef VEGIE
#define VEGIE
#include <iostream>
#include "animal.h"
using namespace std;

class vegie :public animal {
public:
    string get_name();
    string get_favourite_food();
    void set_favo(string fav);
    vegie(string n, int v);      // create a vegie with name n and body volume v
private:
    string favourite_food;     // the vegie's favourite food, initialise to "grass"
    static int nextID;
};
#endif

