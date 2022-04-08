#ifndef CART
#define CART
#include <string>
#include <iostream>
#pragma once
using namespace std;

class cart {
public:
	static	int MAX_CAPACITY;
	static	int CURRENT_CAPACITY;
	cart();                         // create an empty cart object
	bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
	void emptyCart();               // remove all meerkats from the cart
	void printMeerkats();           // print the name, a space, the age, then a new line
									// for each meerkat in the order they were added
};
#endif
