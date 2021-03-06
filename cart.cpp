#include "cart.h"
#include "meerkat.h"
#include <iostream>
#include <string>
#pragma once

using namespace std;

cart::cart() {
	MAX_CAPACITY = 4;
	count = 0;
}

bool cart::addMeerkat(meerkat cat) {
	if (count>=4){
		return false;
	}
	K[count] = cat;
	count++;

	return true;
	
	
}   // adds a meerkat to the cart, returns false if full
void cart::emptyCart() {
	count= 0;
}               // remove all meerkats from the cart
void cart::printMeerkats() {
	for (int i = 0; i < count; i++){
		cout <<K[i].getName() << " " << K[i].getAge() << endl;
	}
}