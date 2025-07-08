void counting_sort(int *arr, int size, int range){
    // *arr - pointer to array
    // size - number of elements in array
    // range - max number in array
    int output[size];
    int count[range];

    for(int i = 0; i <= range; i++){
        count[i] = 0;
    }

    for(int i = 0; i < size; i++){
        count[arr[i]]++;
    }
    
    for(int i = 1; i <= range; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i = size-1; i >= 0; i--){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i <= size; i++) {
        arr[i] = output[i];
    }
}