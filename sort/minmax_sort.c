void swap(int* a, int* b){
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

int min(int *arr, int start, int end){
    // Function finds minimal value in array
    // *arr - pointer to array with int's
    // start - first index
    // end - last index
    int min = start;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    return min;
}

int max(int *arr, int start, int end){
    // Function finds maximal value in array
    // *arr - pointer to array with int's
    // start - first index
    // end - last index
    int max = start;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}

void minmax_sort(int *arr, int start, int end){
    // Sorts an array using the minmax sort algorithm
    // *arr - pointer to array with int's
    // start - first index
    // end - last index
    if(start < end){
        int min = min(arr, start, end);
        swap(&arr[start], &arr[min_idx]);

        int max = max(arr, start + 1, end);
        swap(&arr[end], &arr[max_idx]);

        minmax_sort(arr, start + 1, end - 1);
    }
}