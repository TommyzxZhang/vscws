#include <iostream>
extern int maximum(int array[], int n);

int main(){
    int array[7] = {4,5,6,7,8,9,11};
    std::cout << "The number is: " << maximum(array, 7) << std::endl;
}