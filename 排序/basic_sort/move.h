#ifndef MOVE_H
#define MOVE_H

void move(int arr[], int lft, int rit) {
    int temp = arr[rit];
    for (int i = rit; i > lft; i--) {
        arr[i] = arr[i - 1];
    }
    arr[lft] = temp;
}

#endif