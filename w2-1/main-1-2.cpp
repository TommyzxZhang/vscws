#include <iostream>
extern int diagonal(int array[10][10]);
int main(){
    int array[10][10] = { { 1, 1, 0, 0, 1, 0, 0, 0, 0, 0  }, { 1, 1, 1, 0, 1, 0, 0, 0, 0, 0  }, { 1, 0, 1, 1, 1, 0, 0, 0, 0, 0  }, { 1, 0, 0, 1, 1, 0, 0, 0, 0, 0  }, { 1, 0, 0, 0, 1, 1, 0, 0, 0, 0  }, { 1, 0, 0, 0, 1, 1, 1, 0, 0, 0  }, { 1, 0, 0, 0, 1, 0, 0, 1, 0, 0  }, { 1, 0, 0, 0, 1, 0, 0, 0, 1, 0  }, { 1, 0, 0, 0, 1, 0, 0, 0, 0, 1  } };
    std::cout<< diagonal(array)<<std::endl;
}