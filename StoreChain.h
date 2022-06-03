#ifndef STORECHAIN
#define STORECHAIN
#include <string>
#include <iostream>
#include "AmoebaTickets.h"
using namespace std;

class StoreChain {
public:
	StoreChain();
		/* creates a an object containing pointers to 5 recordStores
		   the first and the last elements of the array are pointers to AmoebaTickets stores,
		   the rest of the elements are pointers to Amoeba objects.
		*/
	RecordStore **chain;

	RecordStore** get_chain();      // returns the array of pointers to the five record stores
private:

};
#endif