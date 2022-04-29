#pragma once
#include "Stock_item.h"

Stock_item::Stock_item() {
	describ = "NULL";
	codeNum = 0;
};              
Stock_item::Stock_item(std::string description, int code_number) {
	describ = description;
	codeNum=code_number;
};
std::string Stock_item::get_description() {
	return describ;
};
int Stock_item::get_item_number() {
	return codeNum;
};