#include "Hunter.h"

int hunter::nextID = 1000;

hunter::hunter(string n, int v) {
	name = n;
	volume = v;
	animalID = nextID;
	nextID++;
}

int hunter::get_kills() {
	return kills;
}
void hunter::set_kills(int k) {
	kills = k;
}

string hunter::get_name() {
	string hunter("Hunter:");
	name.insert(0, hunter);
	return name;
}