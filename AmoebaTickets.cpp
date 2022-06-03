#include "AmoebaTickets.h"

// just use the corresponding base class constructor
AmoebaTickets::AmoebaTickets(string n) {
    name = n;
    Amoeba(n);
    address = "";
}
void AmoebaTickets::ticketsSold() {
    sales = 0;
}

void AmoebaTickets::sellTicket() {
    sales++;
}  
int AmoebaTickets::get_ticketsSold() {
    return sales;
} 