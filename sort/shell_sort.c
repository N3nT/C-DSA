void shell_sort(int* arr, int size){
    // Sorts an array using the shell sort algorithm with Marcin Ciura gap sequence
    // arr - pointer to the array
    // size - number of elements in array
    int gaps[8] = {701, 301, 132, 57, 23, 10, 4, 1}; // Marcin Ciura gap sequence

    for(int i = 0; i < 8; i++){
        for(int j = gaps[i]; j < size; j++){
            int temp = arr[j];
            int k = 0;
            for(k = j; k >= gaps[i] && arr[k-gaps[i]] > temp; k -= gaps[i]){
                arr[k] = arr[k-gaps[i]];
            }
            arr[k] = temp;
        }
    }
}