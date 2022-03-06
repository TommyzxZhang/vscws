double average(int array[], int n){
    if (n < 1)
    {
        return 0.0;
    }
    double f = 0;
    for (int i = 0; i < n; i++){
        f = f + array[i];
    }
    double e = f/n;
    return e;
}