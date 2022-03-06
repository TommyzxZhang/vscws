bool ascending(int array[], int n){
    for (int i = 0; i < n - 1; i++){
        if (array[i] > array[i+1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}