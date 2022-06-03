#ifndef AMOEBA
#define AMOEBA
#include <string>
#include <iostream>
#include "RecordStore.h"
using namespace std;

class Amoeba:public RecordStore{
public:
    Amoeba();
    Amoeba(string a);         // creates address with a
                             // calls the parent class constructor with name=="Amoeba",address==a, 
                             // and sales=0;
    int storeID;             // unique id for the store
    int get_storeID();
    int get_amoebaBranch();
    int get_excessSales() {
        if (sales <= 1000) {
            return 0;
        }
        return sales;
    }
private:
    static int amoebaBranch;
};
#endif