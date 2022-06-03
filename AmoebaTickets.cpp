#include "AmoebaTickets.h"

// just use the corresponding base class constructor

void AmoebaTickets::sellTicket() {
    ticktsSold++;
}  
int AmoebaTickets::get_ticketsSold() {
    return ticktsSold;
} 