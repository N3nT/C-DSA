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

int min(int a, int b){
    // Returns the lesser of two integer values
    return (a < b) ? a : b;
}

int exponential_search(int* arr, int size, int target){
    // Performs exponential search, fast discovery of range, followed by binary_search
    // arr - pointer to sorted array
    // size - total number of elements in arr
    // target - value to search for
    if (size == 0) return -1;
    if (arr[0] == target) return 0;

    int bound = 1;
    while(bound < size && arr[bound] < target){
        bound *= 2;
    }

    int left = bound / 2;
    int right = min(bound, size - 1);

    return binary_search(arr, left, right, target);
}