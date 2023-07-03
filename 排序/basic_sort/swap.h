#ifndef SWAP_H
#define SWAP_H

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

#endif