#include <iostream>
using namespace std;
int* readNumbers() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	return arr;
}
int secondSmallestSum(int* numbers, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < i; j++) {
			sum = 0;
			for (int k = 0; k < length - 1; k++) {
				if (j + k > length - 1) {
					continue;
				}
				else {
					sum += *(nums + j + k);
					if (maximum < sum) {
						maximum = sum;
					}
					else {
						continue;
					}
				}
			}

		}
	}
}