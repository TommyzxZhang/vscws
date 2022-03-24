#include <iostream>
void cpyda(double *old_array, double *new_array, int length) {
	double *a, *b;
	a = old_array;
	b = new_array;
	for (int i = 0; i < length; i++, a++,b++) {
		*b = *a;
	}
}