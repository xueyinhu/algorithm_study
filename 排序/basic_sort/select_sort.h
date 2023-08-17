#ifndef SELECT_SORT_H
#define SELECT_SORT_H

#include "../swap.h"

void select_sort(int arr[], int len) {
    int min_index;
    for (int i = 0; i < len - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[min_index] > arr[j]) min_index = j;
        }
        swap(arr, min_index, i);
    }
}

#endif