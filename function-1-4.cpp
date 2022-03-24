#include <iostream>
void cpyda(double* old_array, double* new_array, int length) {
	*&new_array = *&old_array;
}