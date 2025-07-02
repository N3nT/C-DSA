int interpolation_search(int *arr, int size, int target){
    // *arr - pointer to array with int's
    // size - number of elements in array
    // target - the number we want to find
    int left = 0;
    int right = size - 1;
    while(left <= right && target >= arr[left] && target <= arr[right]){
        int pos = left + (target-arr[left])*(right-left)/(arr[right]-arr[left]);
        if(arr[pos] == target){
            return pos;
        } else if(arr[pos] < target){
            left = pos + 1;
        } else{
            right = pos - 1;
        }
    }
    return -1;
}