#ifndef HUNTER
#define HUNTER
#include <iostream>
#include "animal.h"
using namespace std;

class hunter:public animal{
public:
    int get_kills();
    void set_kills(int k);
    hunter(string n, int v);  // create a hunter with name n and body volume v
private:
    int kills;               // how many kills have been recorded, initialised to 0
    static int nextID;
};
#endif

