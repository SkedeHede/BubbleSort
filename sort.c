#include "sort.h"
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(char arr[], int n, bool (*pair_is_in_order)(char a, char b)) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (!pair_is_in_order(arr[i], arr[i + 1])) {
                swap(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }
        n--;
    } while (swapped);
}

bool ascending(char a, char b) { return a <= b; }
bool descending(char a, char b) { return a >= b; }
