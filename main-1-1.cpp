#include <iostream>
extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n);
using namespace std;


int main(){
    int n = 3;
    std::string first[3][2] = {{"1","2",},{"1","2"},{"1","2"} };
    std::string second[3][2];
    copy_2d_strings(first, second, n);
}