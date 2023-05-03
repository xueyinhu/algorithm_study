#include <iostream>
using namespace std;

void arr_to_string(int arr[], int len) {
    for (int i = 0; i < len; i++) { cout << arr[i] << " "; }
}

void select_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        int min_index = i, min_value = arr[i];
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < min_value) {
                min_index = j;
                min_value = arr[j];
            }
        }
        arr[min_index] = arr[i];
        arr[i] = min_value;
    }
}

void insert_sort(int arr[], int len) {
    int value, t;
    for (int i = 1; i < len; i++) {
        value = arr[i];
        t = i;
        while (--t >= 0 && arr[t] > value) { arr[t + 1] = arr[t]; }
        arr[t + 1] = value;
    }
}

void quick_sort(int left, int right, int arr[]) {
    if (left >= right) return;
    int i = left, j = right, base = arr[left], temp;
    while (i < j) {
        while (arr[j] >= base && i < j) j--;
        while (arr[i] <= base && i < j) i++;
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[left] = arr[i];
    arr[i] = base;
    quick_sort(left, i - 1, arr);
    quick_sort(i + 1, right, arr);
}

int main(int argc, char const *argv[]) {
    int arr[] = {2, 3, 1, 4, 7, 6, 5};
    quick_sort(0, 6, arr);
    arr_to_string(arr, 7);
    return 0;
}
