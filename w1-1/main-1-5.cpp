#include <iostream>
extern int count_even(int number);

int main() {
    int number = 20;
    std::cout << "There is " << count_even(number)<<std::endl;
}