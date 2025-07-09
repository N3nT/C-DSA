#include <time.h>
#include <stdbool.h>
// Include srand(time(NULL)) in main function

void swap(int* a, int* b) {
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_sorted(int* arr, int size) {
    // Function checks if array is sorted
    // *arr - pointer to array
    // size - number of elements in the array
    for(int i = 1; i < size; i++) {
        if(arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

void shuffle(int* arr, int size) {
    // Function shuffle elements in array
    // *arr - pointer to array
    // size - number of elements in the array
    for(int i = 0; i < size; i++) {
        int j = rand() % size;
        swap(&arr[i], &arr[j]);
    }
}

void bogo_sort(int* arr, int size) {
    // Sorts an array using the bogo sort algorithm
    // *arr - pointer to array
    // size - number of elements in the array
    while(!is_sorted(arr, size)) {
        shuffle(arr, size);
    }
}