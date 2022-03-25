#include <iostream>
using namespace std;

int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b = new int[10];

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   


	b = ptr;
	//This step only make the address of b point to address of a, it is not relleay copy.
	cout << "Value of first element in b " << b[0] << endl;
	cout << "Value of second element in b " << b[1] << endl;
	//All steps of cout didn't use pointer to access the adress, which is not pointer magic.
	a[1] = 42;
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}
