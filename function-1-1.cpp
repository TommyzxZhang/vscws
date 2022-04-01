int* shift_right(int* vals, int len, int amount) {
	int* arr = new int[len];
	for (int k = 0; k < amount; k++){
		*(arr + k) = 0;
	}
	for (int i = 0; i < (len-amount); i++){
		*(arr + amount + i) = *(vals + i);
	}
	return arr;
}