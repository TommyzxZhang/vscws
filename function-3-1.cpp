int* count_numbers_in_range(int vals[], int length, int bottom, int top) {
	int *arr = new int[length];
	int k = 0;
	for (int i = 0; i < length; i++){
		if (bottom <= vals[i] && vals[i] <= top) {
			arr[k] = vals[i];
			k++;
		}
	}
	return arr;
}