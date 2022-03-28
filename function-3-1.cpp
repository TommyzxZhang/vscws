#include <iostream>
using namespace std;
int* readNumbers() {
	int* arr = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	return arr;
}
bool equalsArray(int* numbers1, int* numbers2, int length) {
	bool flag = true;
	for (int i = 0; i < length; i++) {
		if (*(numbers1+i)== *(numbers2 + i)){
			continue;
		}
		else{
			flag = false; 
			break;
		}
	}
	return flag;
}