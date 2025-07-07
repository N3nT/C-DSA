void insertion_sort(int *arr, int size){
    // Sorts an array using the insertion sort algorithm
    // *arr - pointer to array with int's
    // size - number of elements in the array
    for(int i = 1; i < size; i++){
        int x = arr[i];
        int j = i - 1;
        while(j >= 0 && x < arr[j]){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = x;
    }
}