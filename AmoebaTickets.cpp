#include "AmoebaTickets.h"

// just use the corresponding base class constructor
AmoebaTickets::AmoebaTickets(string n) {
    name = n;
    Amoeba(a);
    address = "";
}  // creates the record store with name n 
                              // also call the parent class constructor
                              // with an empty address string.
int AmoebaTickets::ticketsSold() {
    sales = 0;
}          // and number of tickets sold so far should be initialised to zero

void AmoebaTickets::sellTicket() {
    sales++;
}        // increments the number of tickets sold  
int AmoebaTickets::get_ticketsSold() {
    return sales;
}        // gets the number of tickets sold