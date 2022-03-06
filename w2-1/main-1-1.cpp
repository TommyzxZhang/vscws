#include <iostream>
extern int diagonal(int array[4][4]);
int main(){
    int array[4][4] = { { 1, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 1 } };
    std::cout<< diagonal(array)<<std::endl;
}