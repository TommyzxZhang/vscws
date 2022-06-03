#include "StoreChain.h"

StoreChain::StoreChain() {
	chain = new RecordStore * [5];
	chain[0] = new AmoebaTickets("Store1");
	chain[1] = new Amoeba("Perth");
	chain[2] = new Amoeba("Adelaide");
	chain[3] = new Amoeba("Darwin");
	chain[4] = new AmoebaTickets("Store2");
}

RecordStore ** StoreChain:: get_chain() {
	return this->chain;
}