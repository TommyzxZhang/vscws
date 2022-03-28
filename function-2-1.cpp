#include <iostream>
using namespace std;

int* readNumbers() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	return arr;
}


void hexDigits(int* numbers, int length) {
	for (int i = 0; i < length; i++){
		switch (*(numbers + i)) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout <<i<<" " << *(numbers + i) << " " << *(numbers + i) << " " << endl;
			break;
		case 10:
			cout << i <<" " << *(numbers + i) << " A " << endl;
			break;
		case 11:
			cout << i <<" " << *(numbers + i) << " B " << endl;
			break;
		case 12:
			cout << i <<" " << *(numbers + i) << " C " << endl;
			break;
		case 13:
			cout << i << " " << *(numbers + i) << " D " << endl;
			break;
		case 14:
			cout << i << " " << *(numbers + i) << " E " << endl;
			break;
		case 15:
			cout << i << " " << *(numbers + i) << " F " << endl;
			break;
		}
	}
}