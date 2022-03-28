#include <iostream>
using namespace std;
extern int* readNumbers();
extern int secondSmallestSum(int* numbers, int length);

int main() {
	int length = 4;
	int* numbers = readNumbers();
	int numbers2 = secondSmallestSum(numbers, length);

	cout <<numbers2 << endl;
	delete[] numbers, numbers2;
}