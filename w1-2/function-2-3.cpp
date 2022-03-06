#include <iostream>

void twofivenine(int array[], int n){
    int count2 = 0;
    int count5 = 0;
    int count9 = 0;
    for (int i = 0; i < n; i++){
        int num = array[i];
        switch(num)
        {
        case 2 :
            count2++;
            break;
        case 5 :
            count5++;
            break;
        case 9 :
            count9++;
            break;
        }
    }
    std::cout<<"2:" << count2 << ";5:" << count5 << ";9:" << count9 << ";" << std::endl;
}