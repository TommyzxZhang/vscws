bool descending(int array[], int n){
    int num1 = 2147483647;
    int num2 = 0;
    for (int i = 0; i < n; i++){
        num2 = array[i];
        if (num2 < num1){
            num1 = num2;
            continue;
        }
        else if (num2 == num1 || num2 > num1){
            return false;
        }
    }
    return true;
}