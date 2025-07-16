void swap(int* a, int* b) {
    // Function swaps two elements in place
    // *a - pointer to first number
    // *b - pointer to second number
    int temp = *a;
    *a = *b;
    *b = temp;
}

void gnome_sort(int* arr, int size){
    // Sorts an array using the gnome (stupid) algorithm
    // *arr - pointer to array
    // size - number of elements in the array
    int pos = 0;
    while(pos < size){
        if(pos == 0 || arr[pos] >= arr[pos-1]){
            pos++;
        } else{
            swap(&arr[pos], &arr[pos-1]);
            pos--;
        }
    }
}