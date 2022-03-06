#include<iostream>
extern double weightedaverage(int array[], int n);

int main(){
	int array[10]={8,1,11,11,9,9,6,9,10,7};
	std::cout << weightedaverage(array, 10) << std::endl;
}