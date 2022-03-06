#include<iostream>
using namespace std;

double weightedaverage(int array[], int n){
    if (n <= 1){
        return 0;
    }
    int sum = 0;
    int finalsum = 0;
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n; j++){
            if(array[i]>array[j]){
                swap(array[i],array[j]);
            }
        }
    }

    for (int i = 0; i < n - 1; i++){
        if (array[i] == array[i+1]){
            sum = array[i] + sum;
        }
        else if (array[i] != array[i+1]){
            finalsum = finalsum +(sum+array[i])/n;
        }
            
            
    }
    return finalsum;
}