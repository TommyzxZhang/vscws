int sum_array(int array[], int n){
    if (n < 1)
    {
        return 0;
    }
    
    int f = 0;
    for (int i = 0; i < n; i++){
        f = f + array[i];
    }
    return f;
}