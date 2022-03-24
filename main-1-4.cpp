extern void cpyda(double* old_array, double* new_array, int length);

int main() {
	int length = 10;
	double *a, old_array[10] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0 };
	double *b, new_array[10];
	cpyda(old_array, new_array, length);
}