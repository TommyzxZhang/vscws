#include "RecordStore.h"

RecordStore::RecordStore() {

}

RecordStore::RecordStore(string n, string a, int s) {
	name = n;
	address = a;
	if (s >= 0){
		sales = s;
	}
	else{
		sales = 0;
	}
}

void RecordStore::set_address(string a) {
	address = a;
}
string RecordStore::get_address() {
	return address;
}
int RecordStore::get_sales() {
	return sales;
}
void RecordStore::set_sales(int s) {
	if (s >= 0) {
		sales = s;
	}
	else {
		sales = 0;
	}
}
void RecordStore::set_name(string n) {
	name = n;
}
string RecordStore::get_name() {
	return name;
}