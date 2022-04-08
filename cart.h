#ifndef CART_H
#define CART_H
#include <string>
#include <iostream>
//#include "meerkat.h"
#pragma once
using namespace std;

class cart {
public:
	int count;
	
	int MAX_CAPACITY;
	int CURRENT_CAPACITY;
	cart();
	meerkat K[4];					// create an empty cart object
	bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
	void emptyCart();               // remove all meerkats from the cart
	void printMeerkats();           // print the name, a space, the age, then a new line
									// for each meerkat in the order they were added
};
#endif
