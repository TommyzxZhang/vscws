extern int* readNumbers();
extern void hexDigits(int* numbers, int length);

int main() {
	int length = 10;
	int* arr = readNumbers();
	hexDigits(arr, length);
	delete[] arr;
}