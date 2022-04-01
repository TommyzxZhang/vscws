#include <iostream>
extern int* shift_right(int* vals, int len, int amount);

int main() {
	int vals[] = { 1,2,3,4,5 };
	int *sv;
	sv = shift_right(vals, 5, 2);
	delete[] sv, vals;
}