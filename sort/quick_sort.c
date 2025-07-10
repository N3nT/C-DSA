void swap(int* a, int* b) {
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int *arr, int left, int right){
    // Sorts an array using the quick sort algorithm
    // *arr - pointer to array with int's
    // left - Index of the first element in the range to sort.
    // right - Index of the last element in the range to sort.
    if(left<right){
        int pivot = arr[left];
        int pivot_index = left;
        for(int i = left + 1; i <= right; i++){
            if(arr[i] < pivot){
                pivot_index++;
                swap(&arr[pivot_index], &arr[i]);
            }
        }
        swap(&arr[left], &arr[pivot_index]);
        quick_sort(arr, left, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, right);
    }
}
