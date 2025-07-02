int linear_search(int *arr, int size, int target){
    // *arr - pointer to array with int's
    // size - number of elements in array
    // target - the number we want to find
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}