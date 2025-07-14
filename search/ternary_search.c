int ternary_search(int *arr, int left, int right, int target){
    // Searches by splitting the segment into three parts
    // *arr - pointer to sorted array
    // left - left boundary index
    // right - right boundary index
    // target - value to find

    if (left > right) return -1;

    int third = (right - left) / 3;
    int mid_one = left + third;
    int mid_two = right - third;

    if(arr[mid_one] == target) return mid_one;
    if(arr[mid_two] == target) return mid_two;

    if(target < arr[mid_one]) return ternary_search(arr, left, mid_one - 1, target);
    else if(target > arr[mid_two]) return ternary_search(arr, mid_two + 1, right, target);
    else return ternary_search(arr, mid_one + 1, mid_two - 1, target);
}