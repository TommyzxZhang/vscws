int diagonal(int array[10][10]){
    bool flag = true;
    for (int i = 0; i < 10; i++){
        if (array[i][i] != 1) {
            flag = false;
            break;
        }
    }
    return flag;
}