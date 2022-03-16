#include <iostream>
extern int sum_if_a_palindrome(int integers[], int length);
extern bool is_a_palindrome(int integers[], int length);
extern int sum_elements(int integers[], int length);

int main() {
	int integers[8] = { 1,2,0,0,0,0,2,1 };
	int length = 8;
	bool flag = is_a_palindrome(integers, length);
	if (flag == true){
		std::cout<<sum_if_a_palindrome(integers, length);
	}
	else{
		std::cout <<sum_elements(integers, length);
		return -2;
	}
}