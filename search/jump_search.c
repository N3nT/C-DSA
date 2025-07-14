#include <math.h>

int min(int a, int b){
    // Returns the lesser of two integer values
    return (a < b) ? a : b;
}

int jump_search(int* arr, int size, int target){
    // Searches in a sorted array by jumping and then scanning within a block
    // arr - pointer to sorted array
    // target - value to search for
    int step = (int) sqrt(size);
    int prev = 0;
    while(arr[min(step, size)-1] < target){
        prev = step;
        step += (int) sqrt(size);
        if(prev >= target) return -1;
    }

    for(int i = prev; i < min(step, size); i++){
        if(arr[i] == target) return i;
    }

    return -1;
}