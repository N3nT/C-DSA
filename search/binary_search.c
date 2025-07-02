int binary_search(int *arr, int size, int target){
    // *arr - pointer to array with int's
    // size - number of elements in array
    // target - the number we want to find
    int left = 0;
    int right = size - 1;

    while (left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == target){
            return mid;
        } else if(arr[mid] > target){
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }
    return -1;
}