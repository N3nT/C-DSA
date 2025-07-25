## [Bubble sort](bubble_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is **not** natural.<br>

*Description: Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.*

---

## [Minmax sort](minmax_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is **not** natural.<br>

*Description: MinMax Sort is a variation of selection sort that simultaneously selects the minimum and maximum elements from the unsorted portion of the array and places them at their correct positions at the beginning and end, respectively. This reduces the number of iterations needed.*

---

## [Selection sort](selection_sort.c)
Time complexity: O(n<sup>2</sup>)<br>
Auxiliary Space: O(1)<br>
The algorithm is **not** stable.<br>
The algorithm is **not** natural.<br>

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
The algorithm is **not** natural.<br>

*Description: Counting Sort is a non-comparison-based sorting algorithm that counts the occurrences of each distinct element and uses this information to place elements in their correct position. It is efficient for sorting integers within a limited range.*

---

## [Radix sort](radix_sort.c)
Time complexity: O(n)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is **not** natural.<br>

*Description: Radix Sort is a non-comparison-based sorting algorithm that sorts numbers digit by digit, starting from the least significant digit to the most significant. It uses a stable subroutine like counting sort for each digit position.*

---

## [Merge sort](merge_sort.c)
Time complexity: O(n log n)<br>
Auxiliary Space: O(n)<br>
The algorithm is stable.<br>
The algorithm is **not** natural.<br>

*Description: Merge Sort is a divide-and-conquer sorting algorithm. It recursively divides the array into halves, sorts each half, and then merges the sorted halves into a single sorted array.*

---

## [Heap sort](heap_sort.c)
Time complexity: O(n log n)<br>
Auxiliary Space: O(1)<br>
The algorithm is stable.<br>
The algorithm is **not** natural.<br>

*Description: Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It first builds a max heap from the input data, then repeatedly extracts the maximum element from the heap and rebuilds the heap until the array is sorted.*

---

## [Bogo sort](bogo_sort.c)
Time complexity: O(inf)<br>
Auxiliary Space: O(1)<br>
The algorithm is **not** stable.<br>
The algorithm is **not** natural.<br>

*Description: Bogo Sort is a highly inefficient sorting algorithm that randomly shuffles the elements of the array until they are sorted. It is mainly used for educational or entertainment purposes and is not practical for real-world applications.*

---

## [Quick sort](quick_sort.c)
Time complexity: O(nlogn)<br>
Auxiliary Space: O(log n)<br>
The algorithm is **not** stable.<br>
The algorithm is **not** natural.<br>

*Description: Quick Sort is an efficient, divide-and-conquer sorting algorithm that selects a pivot element and recursively partitions the array into subarrays of elements less than and greater than the pivot. It has good average-case performance and is widely used in practice.*

---

## [Bucket Sort](bucket_sort.c)
Time complexity: Average case O(n)<br>
Auxiliary Space: O(n + k)<br>
The algorithm is stable (if stable sort is used inside buckets).<br>
The algorithm is natural for data uniformly distributed over a range.<br>

*Description: Bucket Sort distributes elements into several buckets based on their values, then sorts each bucket individually (usually with insertion sort), and finally concatenates the sorted buckets. It works efficiently when input data is uniformly distributed and is mainly used for sorting floating-point numbers or integers within a known range.*

---

## [Gnome sort](gnome_sort.c)
Time complexity: O(n^2)<br>
Auxiliary space: O(1)<br>
The algorithm is stable<br>
The algorithm is natural<br>

*Description: Gnome Sort is a simple, intuitive sorting algorithm that resembles Insertion Sort but uses a single loop and adjacent swaps. It works by comparing the current element with the previous one; if they are in order, it advances; if not, it swaps them and steps back. This continues until the entire array is sorted. It's adaptive—approaching O(n) performance on nearly sorted arrays—and is best suited for small or mostly sorted datasets.*

---

## [Shell sort](shell_sort.c)
Time complexity: O(n log n), becasue of Ciura gap sequence<br>
Auxiliary space: O(1)<br>
The algorithm is **not** stable<br>
The algorithm is **not** natural<br>

*Description: Shell Sort is an in-place, comparison-based sorting algorithm that generalizes Insertion Sort by initially sorting elements that are far apart using a diminishing “gap” sequence. Each pass performs a gapped Insertion Sort, gradually reducing the gap until it becomes 1, completing with a final standard Insertion Sort. This approach efficiently moves out‑of‑place elements closer to their targets early, greatly reducing the total number of shifts needed, especially when using empirically optimized gaps (e.g. Marcin Ciura’s).*

---