void insertion_sort(int *arr, int size){
    // Sorts an array using the insertion sort with guardian algorithm
    // *arr - pointer to array with int's
    // size - number of elements in the array
    for(int i = 2; i < size; i++){
        int x = arr[i];
        arr[0] = x;
        int j = i - 1;
        while(x < arr[j]){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = x;
    }
}