#ifndef SORT_H
#define SORT_H

#include <stdbool.h>

// Funktionsdeklarationer
void bubble_sort(char arr[], int n, bool (*pair_is_in_order)(char a, char b));
void swap(char *a, char *b);

// Sammenligningsfunktioner
bool ascending(char a, char b);
bool descending(char a, char b);

#endif
