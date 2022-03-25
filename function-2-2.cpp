int maximum_sum(int *nums, int length) {
	int count = 0;
	for (int i = 0; i < length; i++){
		if (*(nums + i) < 0) {
			count++;
			if (count==length){
				return false;
			}
		}
	}
	if (length<1){
		return 0;
	}
	int sum = 0;
	int maximum = 0;
	for (int i = 0; i < length-1; i++){
		for (int j = 0; j < i; j++){ 
			sum = 0;
			for (int k = 0; k < length-1; k++){
				if (j+k>length-1){
					continue;
				}
				else{
					sum += *(nums + j+k);
					if (maximum < sum) {
						maximum = sum;
					}
					else {
						continue;
					}
				}
			}

		}
	}
	return maximum;
}
