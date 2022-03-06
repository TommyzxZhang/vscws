#include <iostream>
extern int sumtwo(int array[], int secondarray[], int n);
int main() {
    int array[7] = {5,5,6,7,5,9,11};
    int secondarray[7] = {5,5,6,7,5,9,11};
    std::cout << "The number is: " << sumtwo(array, secondarray, 7) << std::endl;
}