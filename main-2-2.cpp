#include <iostream>
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
	int binary_digits[4] = { 1,0,1,0 };
	int number_of_digits = 4;
	std::cout << binary_to_number(binary_digits, number_of_digits);
}