#include<iostream>
using namespace std;

int median(int array[], int n){
    if (n <= 1){
        return 0;
    }
    for(int i = 0; i < n; i++)
            for(int j = i + 1;j < n; j++){
                if(array[i] > array[j]){
                    swap(array[i],array[j]);
                }
            }
            for(int i = 0;i < n; i++){
                std::cout << array[i] << ' ';
            }
            
            cout << endl;
            if (n <= 1) {
                return 0;
            }
            else {
                return 1;
            }
}
