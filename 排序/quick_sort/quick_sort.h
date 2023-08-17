#ifndef QUICK_SORT_H
#define QUICK_SORT_H

int partition(int arr[], int left, int right) {
    int x = arr[right];
    
    return 0;
}

void quick_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = partition(arr, left, right);
        quick_sort(arr, left, mid - 1);
        quick_sort(arr, mid + 1, right);
    }
}

#endif
