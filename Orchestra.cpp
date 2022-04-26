#include "Orchestra.h"
#include <string>
#pragma once

using namespace std;



Musician allMusil[];
Orchestra::Orchestra() {

}
Orchestra::Orchestra(int size) {
	siz = size;
}   // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() {
	return count;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument) {
	for (int i = 0; i < count; i++){
		string a = *(list1 + i).get_instrument();
		if (a!=instrument) {
			continue;
		}
		else{
			return true;
		}
	}
	return false;
}


Musician *Orchestra::get_members() {
	return list1;
}        // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician) {
	if (count<siz){
		count++;
	}
	else{
		return false;
	}
	*(list1 + count) = new_musician;
	return true;
}