#include "AmoebaTickets.h"

// just use the corresponding base class constructor

void AmoebaTickets::sellTicket() {
    sales++;
}  
int AmoebaTickets::get_ticketsSold() {
    return sales;
} 