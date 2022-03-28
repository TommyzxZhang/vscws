#include <iostream>
extern int maximum_sum(int *nums, int length);

int main() {
	int length = 10;
	int *a, num[10] = {-31, -41, -59, -26, -53, -58, -97, -93, -23, -84};
	std::cout<<maximum_sum( num, length)<<std::endl;
}