#include "Musician.h"
#include <string>
#pragma once

using namespace std;


Musician::Musician() {

}
Musician::Musician(string instrument, int experience) {
	exp = experience;
	ins = instrument;
}
string Musician::get_instrument() {
	return ins;
}
int Musician::get_experience() {
	return exp;
}
