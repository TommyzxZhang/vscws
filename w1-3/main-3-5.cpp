#include <iostream>
extern double sumeven(double array[], int n);
int main(){
    double array[7] = {8,11,12,14,12,10,8};
    std::cout << (int)sumeven(array, 7) << std::endl;
}