#include <iostream>
void cpyia(int *old_array, int *new_array, int length) {
	*&new_array = *&old_array;
}
