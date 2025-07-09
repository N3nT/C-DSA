void swap(int* a, int* b){
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int* arr, int i, int size){
    // Restores the max-heap property at index 'i' in the heap.
    // *arr - pointer to array
    // i - the index of the node in the heap where heapify starts.
    // size - number of elements in array
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    } 
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(&arr[i], &arr[largest]);
        max_heapify(arr, largest, size);
    }
}

void build_max_heap(int* arr, int size){
    // Function build the max-heap
    // *arr - pointer to array
    // size - number of elements in array
    for(int i = size/2; i >= 0; i--){
        max_heapify(arr, i, size);
    }
}