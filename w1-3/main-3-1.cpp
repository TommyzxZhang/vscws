#include <iostream>
extern bool fanarray(int array[], int n);
int main(){
    int array[7] = {8,10,12,14,12,10,8};
    std::cout << fanarray(array, 0) << std::endl;
}