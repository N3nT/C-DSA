int linear_search(int *arr, int size, int target){
    // Simple linear scan through all elements
    // *arr - pointer to array with int's
    // size - number of elements in array
    // target - value to search for
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}