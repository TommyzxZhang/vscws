double sumeven(double array[], int n){
    if (n < 1) {
        return false;
    }
    double sum = 0;
    for (int i = 0; i < n; i++){

        if (i % 2 == 0 || i == 0){
            sum = array[i] + sum;
        }
        
    }
    return sum;
}