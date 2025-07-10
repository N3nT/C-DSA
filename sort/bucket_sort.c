#include <stdlib.h>

void insertion_sort(float *arr, int size){
    // Sorts an array using the insertion sort algorithm
    // *arr - pointer to array with floats's
    // size - number of elements in the array
    for(int i = 1; i < size; i++){
        float x = arr[i];
        int j = i - 1;
        while(j >= 0 && x < arr[j]){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = x;
    }
}
void bucket_sort(float *arr, int size) {
    // Sorts an array using the bucket sort algorithm
    // *arr - pointer to array with floats's
    // size - number of elements in the array
    float** buckets = malloc(size * sizeof(float*));
    int* bucket_counts = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        buckets[i] = malloc(size * sizeof(float));
    }

    for (int i = 0; i < size; i++) {
        int index = size * arr[i];
        if (index >= size) index = size - 1;
        buckets[index][bucket_counts[index]++] = arr[i];
    }

    int k = 0;
    for (int i = 0; i < size; i++) {
        insertion_sort(buckets[i], bucket_counts[i]);
        for (int j = 0; j < bucket_counts[i]; j++) {
            arr[k++] = buckets[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        free(buckets[i]);
    }
    free(buckets);
    free(bucket_counts);
}