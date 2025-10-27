# Bubble Sort Project

## Purpose
This project implements the **Bubble Sort** algorithm in C.  
The goal is to repeatedly compare and swap neighboring elements in an array until all are in the correct order.  
The implementation supports both **ascending** and **descending** order using a function pointer to decide the comparison logic.

---

## Files Overview

| File | Description |
|------|--------------|
| `main.c` | Contains the `main()` function that tests the sorting algorithm on letter and number arrays. |
| `sort.c` | Contains the implementation of `bubble_sort()` and helper functions such as `swap()` and comparison functions. |
| `sort.h` | Header file with function declarations and definitions for `bubble_sort`, `swap`, and comparison functions. |
| `Flowchart.png` | Flowchart visualizing the algorithm with both the inner and outer loops. |

---

## ⚙️ Function Overview

### `void bubble_sort(char arr[], int n, bool (*pair_is_in_order)(char a, char b));`
Sorts the given array using the **Bubble Sort** algorithm.

**Parameters:**
- `arr[]` – the array to be sorted  
- `n` – length of the array  
- `pair_is_in_order` – function pointer that determines whether two elements are in correct order

---

### `void swap(char *a, char *b);`
Swaps the values of two characters in the array.

---

### `bool ascending(char a, char b);`
Returns `true` if `a` should come before `b` in ascending order.

---

### `bool descending(char a, char b);`
Returns `true` if `a` should come before `b` in descending order.

---

## Example Test (`main.c`)

```c
char letter_arr1[] = {'z', 's', 's', 'a'};   // Example: letters
char number_arr1[] = {4, -1, 2, 9};          // Example: numbers

bubble_sort(letter_arr1, sizeof(letter_arr1)/sizeof(letter_arr1[0]), ascending);
// Output: a s s z

bubble_sort(number_arr1, sizeof(number_arr1)/sizeof(number_arr1[0]), ascending);
// Output: -1 2 4 9
```
