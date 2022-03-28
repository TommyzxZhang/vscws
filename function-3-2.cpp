#include <iostream>
using namespace std;
int* readNumbers() {
	int* arr = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	return arr;
}
int* reverseArray(int* numbers1, int length) {
	int* numbers2 = new int[5];
	int j=0;
	for (int i = length; i > -1, j > length; i--, j++) {
		*(numbers2 + j) = *(numbers1 + i);
	}
	return numbers2;
}

bool equalsArray(int* numbers1, int* numbers2, int length) {
	bool flag = true;
	for (int i = 0; i < length; i++) {
		if (*(numbers1 + i) == *(numbers2 + i)) {
			continue;
		}
		else {
			flag = false;
			break;
		}
	}
	return flag;
}
