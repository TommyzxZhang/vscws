#include "cart.h"
#include "meerkat.h"
#include "meerkat.cpp"
#pragma once
#include <iostream>
#include <string>
using namespace std;

cart::cart() {
	MAX_CAPACITY = 4;
	CURRENT_CAPACITY = 0;
}

bool cart::addMeerkat(meerkat cat) {
	if (CURRENT_CAPACITY < MAX_CAPACITY) {
		CURRENT_CAPACITY += 1;
		return true;
	}
	else {
		return false;
	}
	
}   // adds a meerkat to the cart, returns false if full
void cart::emptyCart() {
	CURRENT_CAPACITY = 0;
}               // remove all meerkats from the cart
void printMeerkats() {
	
}