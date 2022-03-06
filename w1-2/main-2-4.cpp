#include <iostream>
extern bool ascending(int array[], int n);
int main(){
    int array[7] = {4,5,6,7,8,9,11};
    std::cout << ascending(array, 7) << std::endl;
}
