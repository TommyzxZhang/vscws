#include <iostream>
extern bool descending(int array[], int n);
int main(){
    int array[7] = {11,10,9,8,7,6,5};
    std::cout << descending(array, 7) << std::endl;
}