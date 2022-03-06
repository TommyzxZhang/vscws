#include <iostream>
extern int sum_array(int array[], int n);

int main() {
    int array[7] = {4,5,6,7,8,9,11};
    std::cout << "The number is: " << sum_array(array, 7) << std::endl;
}