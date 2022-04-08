#ifndef PERSON
#define PERSON
#include <string>
#include <iostream>

using namespace std;

class person {
public:
	person();
	person(string myName, int Salary);
	string name;
	int sala;
	void setName(string myName);
	void setSalary(int mySalary);
	string getName();
	int getSalary();
};
#endif