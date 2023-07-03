#ifndef MERGE_H
#define MERGE_H

void merge(int arr[], int temp[], int sta, int mid, int end) {
    int lft = sta, rit = mid + 1;
    for (int i = sta; i <= end; i++) {
        temp[i] = arr[i];
    }
    for (int i = sta; i <= end; i++) {
        if (lft > mid) arr[i] = temp[rit++];
        else if (rit > end) arr[i] = temp[lft++];
        else if (temp[lft] < temp[rit]) arr[i] = temp[lft++];
        else arr[i] = temp[rit++];
    }
}

#endif