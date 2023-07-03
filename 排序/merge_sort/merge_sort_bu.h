#ifndef MERGE_SORT_BU_H
#define MERGE_SORT_BU_H

#include "merge.h"

void merge_sort_bu(int arr[], int len) {
    int temp[len];
    for (int i = 1; i < len;  i += i) {
        for (int j = 0; j < len - i; j += i + i) {
            merge(arr, temp, j, j + i - 1, (j + i + i - 1) > (len - 1) ? (len - 1) : (j + i + i - 1));
        }
    } 
}

#endif