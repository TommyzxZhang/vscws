#include <iostream>

bool fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }
    int count1 = 0;
    int count2 = n - 1;
    bool flag = true;
    while (count1 <= n/2){
        if (array[count1] != array[count2]){
            flag = false;
            break;
        }
        else if (array[count1] >= array[count1]&&count1<=n/2) {
            flag = false;
            break;
        }
        count1++;
        count2 = count2 - 1;
    }
    return flag;
}