#include "meerkat.h"

meerkat::meerkat() {

}

void meerkat::setname(string meerName) {
	name = meerName;
}
void meerkat::setAge(int meerAge) {
	age = meerAge;
}
string meerkat::getName() {
	return name;
}
int meerkat::getAge() {
	return age;
}