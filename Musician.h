#ifndef MUSICIAN
#define MUSICIAN
#include <string>
#include <iostream>

using namespace std;

class Musician {
public:
	int exp;
	string ins;
	Musician();
	Musician(string instrument, int experience);
	string get_instrument();
	int get_experience();

};
#endif