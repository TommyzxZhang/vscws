extern void cpyia(int old_array[], int new_array[], int length); 

int main() {
	int length = 10;
	int *a, old_array[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int	*b, new_array[10];
	cpyia(old_array, new_array, length);
}