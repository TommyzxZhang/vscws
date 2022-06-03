#ifndef AMOEBATICKETS
#define AMOEBATICKETS
#include <string>
#include <iostream>
#include "Amoeba.h"
using namespace std;

class AmoebaTickets :public Amoeba {
public:
    AmoebaTickets() {};            // just use the corresponding base class constructor
    AmoebaTickets(string n) {
        this->name = n;
        this->address = "";
        this->ticktsSold = 0;
    };  // creates the record store with name n 
    int ticktsSold = 0;
                                  // also call the parent class constructor
                                  // with an empty address string.

    void sellTicket();        // increments the number of tickets sold  
    int get_ticketsSold();        // gets the number of tickets sold
private:

};
#endif