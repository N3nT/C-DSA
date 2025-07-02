void swap(int* a, int* b){
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int size){
    // Sorts an array using the bubble sort algorithm
    // *arr - pointer to array with int's
    // size - number of elements in the array
    for(int i = 0; i < size; i++){
        for(int j = size-1; j > i; j--){
            if(arr[j] < arr[j-1]){
                swap(&arr[j], &arr[j-1]);
            }
        }
    }
}