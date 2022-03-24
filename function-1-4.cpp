#include <iostream>
#include<cstring>
void cpyda(double *old_array, double *new_array, int length) {
		memcpy(new_array, old_array, sizeof(old_array));
}