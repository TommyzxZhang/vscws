#include "Store.h"
using namespace std;

int main() {
	Stock_item fuc("fuck", 1);
	Stock_item fuck("fuck", 1);
	Stock_item fuckk("fuck", 1);
	Stock_item fuckkk("fuck", 1);
	Store fuuck(3);
	cout<<fuuck.add_stock(fuc)<<endl;
	cout << fuuck.add_stock(fuck) << endl;
	cout << fuuck.add_stock(fuckk) << endl;
	cout << fuuck.add_stock(fuckkk) << endl;
	cout << fuuck.get_total_stock_count() << endl;
	cout << fuuck.get_stock_quantity(1) << endl;

}