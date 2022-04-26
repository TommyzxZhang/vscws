#ifndef ORCHESTRA
#define ORCHESTRA
#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

class Orchestra {
public:
	int siz;
	int count;
	Musician* list1=new Musician[siz];
	Orchestra();           // default constructor
	Orchestra(int size);
	int get_current_number_of_members();

	// returns true if any musician in the orchestra plays the specified instrument
	// otherwise returns false
	bool has_instrument(std::string instrument);


	Musician* get_members();        // returns the array of members of the orchestra

	// returns true and adds new musician to the orchestra if the orchestra is not full
	// otherwise returns false
	bool add_musician(Musician new_musician);


	~Orchestra();

};
#endif