#include "Amoeba.h"

int Amoeba::amoebaBranch = 0;

Amoeba::Amoeba(string a) {
	address = a;
	name = "Amoeba";
	storeID = amoebaBranch;
	amoebaBranch++;
}