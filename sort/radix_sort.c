void counting_sort(int *arr, int size, int exp){
    // Modified Counting Sort Algorithm for Radix Sort
    // *arr - pointer to array
    // size - nubmer of elements in array
    // exp (exponent) – represents the current digit position used for sorting. 
    int output[size];
    int count[10] = {0};

    for(int i = 0; i < size; i++){
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    for(int i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }

    for(int i = size - 1; i >= 0; i--){
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for(int i = 0; i < size; i++){
        arr[i] = output[i];
    }
}


void radix_sort(int *arr, int size, int max_digits){
    // Sorts an array using the radix sort algorithm
    // *arr - pointer to array
    // size - nubmer of elements in array
    // max_digits – the number of digits in the largest number in the input array.
    int exp = 1;
    for(int i = 0; i < max_digits; i++){
        counting_sort(arr, size, exp);
        exp *= 10;
    }
}