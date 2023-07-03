#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "merge.h"

void merge_sort(int arr[], int temp[], int sta, int end) {
    if (sta >= end) return;
    int mid = sta + (end - sta) / 2;
    merge_sort(arr, temp, sta, mid);
    merge_sort(arr, temp, mid + 1, end);
    merge(arr, temp, sta, mid, end);
}

#endif