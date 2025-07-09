## [Bubble sort](bubble_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.*

---

## [Minmax sort](minmax_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: MinMax Sort is a variation of selection sort that simultaneously selects the minimum and maximum elements from the unsorted portion of the array and places them at their correct positions at the beginning and end, respectively. This reduces the number of iterations needed.*

---

## [Selection sort](selection_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is not stable.<br>
The algorithm is not natural.<br>

*Description: Selection Sort is a simple comparison-based algorithm. It divides the array into a sorted and unsorted part, repeatedly selecting the smallest element from the unsorted part and swapping it with the first unsorted element.*

---

## [Insertion sort](insertion_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is natural.<br>

*Description: Insertion Sort builds the sorted array one element at a time by repeatedly picking the next element and inserting it into its correct position in the already sorted part of the array.*

---

## [Insertion sort with guardian](insertion_sort_with_guardian.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is natural.<br>

*Description: Insertion Sort with Guardian uses a sentinel (or "guardian") element to simplify boundary checks during insertion. It temporarily places the current element at the beginning of the array to avoid checking if the index goes below zero during comparisons.*

---

## [Counting sort](counting_sort.c)
Time complexity: O(n)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: Counting Sort is a non-comparison-based sorting algorithm that counts the occurrences of each distinct element and uses this information to place elements in their correct position. It is efficient for sorting integers within a limited range.*

---

## [Radix sort](radix_sort.c)
Time complexity: O(n)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: Radix Sort is a non-comparison-based sorting algorithm that sorts numbers digit by digit, starting from the least significant digit to the most significant. It uses a stable subroutine like counting sort for each digit position.*

---

## [Merge sort](merge_sort.c)
Time complexity: O(n log n)<br>
Auxiliary Space: O(n)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: Merge Sort is a divide-and-conquer sorting algorithm. It recursively divides the array into halves, sorts each half, and then merges the sorted halves into a single sorted array.*

---

## [Heap sort](heap_sort.c)
Time complexity: O(n log n)<br>
Auxiliary Space: O(n)<br>
The algorithm is stable.<br>
The algorithm is not natural.<br>

*Description: Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It first builds a max heap from the input data, then repeatedly extracts the maximum element from the heap and rebuilds the heap until the array is sorted.*

---

## [Bogo sort](bogo_sort.c)
Time complexity: O(inf)<br>
Auxiliary Space: O(n)<br>
The algorithm is not stable.<br>
The algorithm is not natural.<br>

*Description: Bogo Sort is a highly inefficient sorting algorithm that randomly shuffles the elements of the array until they are sorted. It is mainly used for educational or entertainment purposes and is not practical for real-world applications.*