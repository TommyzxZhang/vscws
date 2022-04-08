#include "person.h"

person::person() {

}

person::person(string myName, int Salary) {
	name = myName;
	sala = Salary;
}
void person::setName(string myName) {
	name = myName;
}
void person::setSalary(int mySalary) {
	sala = mySalary;
}
string person::getName() {
	return name;
}
int person::getSalary() {
	return sala;
}