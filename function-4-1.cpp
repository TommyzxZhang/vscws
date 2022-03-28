#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int* readNumbers() {
	int* arr = new int[4];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	return arr;
}

int secondSmallestSum(int* numbers, int length) {
	for (int i = 0; i < length; i++){
		for (int j = i + 1; j < length; j++) {
			if (*(numbers + i) > *(numbers + j))
				swap(*(numbers + i), *(numbers + j));
		}
	}
	return *numbers+1;
}