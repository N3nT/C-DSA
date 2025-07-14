int binary_search(int *arr, int left, int right, int target){
    // Searching for target using binary search
    // *arr - pointer to array with int's
    // left - starting index
    // right - ending index
    // target - value to search for
    while (left <= right){
        int mid = (left + right) / 2;

        if (arr[mid] == target) return mid;
        else if(arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}