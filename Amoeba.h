#ifndef AMOEBA
#define AMOEBA
#include <string>
#include <iostream>
#include "RecordStore.h"
using namespace std;

class Amoeba:public RecordStore{
public:
    Amoeba(string a);         // creates address with a
                             // calls the parent class constructor with name=="Amoeba",address==a, 
                             // and sales=0;
    int storeID;                 // unique id for the store
private:
    static int amoebaBranch;
};
#endif