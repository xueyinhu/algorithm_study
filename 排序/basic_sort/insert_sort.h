#ifndef INSERT_SORT_H
#define INSERT_SORT_H

// #include "../swap.h"
#include "move.h"

void insert_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        // for (int j = i; j > 0; j--) {
        //     if (arr[j] < arr[j - 1]) {
        //         swap(arr, j, j - 1);
        //     } else {
        //         break;
        //     }
        // }
        if (arr[0] > arr[i]) {
            move(arr, 0, i);
        } else {
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] <= arr[i]) {
                    move(arr, j + 1, i);
                }
            }
        }
    }
}

#endif