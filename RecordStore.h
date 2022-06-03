#ifndef RECORDSTOR
#define RECORDSTOR
#include <string>
#include <iostream>

using namespace std;

class RecordStore {
public:
	RecordStore();
	RecordStore(string n, string a, int s);   // creates a record store of name n, address a, and sales s
	string name;           // the name of a record store
	string address;             // the address of a record store
	int sales;        // number of records that have been sold. Takes only non-negative values
	void set_address(string a);
	string get_address();
	int get_excessSales();  // return the number of record sales above a given store target
};
#endif