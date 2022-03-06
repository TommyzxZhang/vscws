int maximum(int array[], int n){
    if (n < 0){
        return 0;
    }
    int num1 = -2147483648;
    int num2;
    for (int i = 0; i < n; i++){
        num2 = array[i];
        if (num1 < num2){
            num1 = num2;
            continue;
        }
        else if (num1 == num2){
            num1 = num2;
            continue;            
        }
        else{
            continue;
        }
        
    }
    return num1;
}