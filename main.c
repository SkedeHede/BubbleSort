#include <stdio.h>
#include "sort.h"

int main(void) {
    // Bogstaver
    char letter_arr1[] = {'z', 's', 's', 'a'};
    int n1 = sizeof(letter_arr1) / sizeof(letter_arr1[0]);
    bubble_sort(letter_arr1, n1, ascending);

    printf("Sorted letters (asc): ");
    for (int i = 0; i < n1; i++) {
        printf("%c ", letter_arr1[i]);
    }
    printf("\n");

    // Tal
    char number_arr1[] = {4, -1, 2, 9};
    int n2 = sizeof(number_arr1) / sizeof(number_arr1[0]);
    bubble_sort(number_arr1, n2, ascending);

    printf("Sorted numbers (asc): ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", number_arr1[i]);
    }
    printf("\n");

    return 0;
}
