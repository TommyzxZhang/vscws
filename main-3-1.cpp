#include <iostream>
using namespace std;

extern int count_numbers_in_range(int vals[], int length, int bottom, int top);

int main() {
	int vals[] = { 1,7,3,4,6,5,2 };
	int res = count_numbers_in_range(vals, 7, 3, 6);

	int vals2[] = { 1,4,5,6,8,2,9,4,2,5,6,1 };
	int res2 = count_numbers_in_range(vals2, 12, 3, 6);
}