#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n, int v) {
	favourite_food = n;
	volume = v;
	animalID = nextID;
	nextID++;
}

string vegie::get_favourite_food() {
	return favourite_food;
}

void vegie::set_favo(string fav) {
	favourite_food = fav;
}

string vegie::get_name() {
	string vegie("Safe:");
	name.insert(0, vegie);
	return name;
}