#include <iostream>
#include<cstring>
void cpyia(int old_array[], int new_array[], int length) {
	memcpy(new_array, old_array, sizeof(old_array));
}