#include "Amoeba.h"

int Amoeba::amoebaBranch = 0;

Amoeba::Amoeba(string a) {
	address = a;
	name = "Amoeba";
	storeID = amoebaBranch;
	amoebaBranch++;
}
int Amoeba::get_storeID() {
	return storeID;
}
int Amoeba::get_amoebaBranch() {
	return amoebaBranch;
}
