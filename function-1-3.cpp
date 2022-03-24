#include <iostream>
void cpyia(int *old_array, int *new_array, int length) {
	for (int i = 0; i < 10; i++){
		new_array[i] = old_array[i];
	}

	for (int i = 0; i < 10; i++) {
		std::cout << new_array[i];
	}
}