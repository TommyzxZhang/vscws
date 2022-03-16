bool is_a_palindrome(int integers[], int length) {
	int num = length / 2;
	int num1 = length;
	bool flag = true;
	for (int i = 0; i < num; i++){
		num1 = length -1 - i;
		if (integers[i] != integers[num1]) {
			flag = false;
			break;
		}
	}
	return flag;
}
int sum_if_a_palindrome(int integers[], int length) {
	
	int num = 0;
	for (int i = 0; i < length / 2; i++) {
		num += integers[i];
	}
	num = num * 2;
	return num;
}
int sum_elements(int integers[], int length){
	
	int num = 0;
	for (int i = 0; i < length ; i++) {
		num += integers[i];
	}
	return num;
}
