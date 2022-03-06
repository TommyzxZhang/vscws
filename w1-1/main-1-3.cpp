#include <iostream>
extern int count(int array[], int n, int number);

int main() {
    int array[7] = {5,5,6,7,5,9,11};
    std::cout << "The number is: " << count(array, 7, 5) << std::endl;
}