#ifndef STOCK_ITEM
#define STOCK_ITEM
#include <iostream>
using namespace std;

class Stock_item {
public:
	std::string describ;
	int codeNum;
	Stock_item();                  // a default constructor 
	// a constructor that takes the item description and the item code number as inputs
	Stock_item(std::string description, int code_number);
	std::string get_description();    // returns the item description
	int get_item_number();       // returns the code number of the item
};
#endif