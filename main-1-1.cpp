extern int* readNumbers();
extern void printNumbers(int* numbers, int length);

int main() {
	int length = 10;
	int *arr = readNumbers();
	printNumbers(arr, length);
	delete[] arr;
}