#include "Store.h"

Store::Store() {
	cap = 0;
};
Store::Store(int capacity) {
	cap = capacity;
	list = new Stock_item[capacity];
};

// returns the number items currently stocked
// note that if more than one of the same item is in stock they are *all* counted
// i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
int Store::get_total_stock_count() {
	return currCap;
};

// returns the total count of items in stock with the given item number
// i.e. if there are 3 widgets (with the given item_number in stock then it will return 3.
int Store::get_stock_quantity(int item_number) {
	int count = 0;
	for (int i = 0; i < currCap; i++){
		if (list->get_item_number() == item_number) {
			count++;
		}
	}
	return count;
};

// returns the array of all items in stock. 
// i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
Stock_item* Store::get_current_stock_list() {
	return list;
};

// returns true and adds new_stock to the store if the store has enough capacity
// otherwise returns false
bool Store::add_stock(Stock_item new_stock) {
	if (currCap<cap){
		list[currCap] = new_stock;
		currCap++;
		return true;
	}
	else{
		return false;
	}
};