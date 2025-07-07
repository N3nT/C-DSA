void swap(int* a, int* b){
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int size){
    // Sorts an array using the selection sort algorithm
    // *arr - pointer to array
    // size - number of elements in the array
    for(int i = 0; i < size-1; i++){
        int k = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        swap(&arr[k], &arr[i]);
    }
}