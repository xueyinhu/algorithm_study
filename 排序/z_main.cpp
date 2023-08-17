#include "basic_sort/select_sort.h"
#include "basic_sort/insert_sort.h"

#include "merge_sort/merge_sort.h"
#include "merge_sort/merge_sort_bu.h"

#include "heap_sort/heap.h"

#include <iostream>
using namespace std;

int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
int len = 9;

int main(int argc, char const *argv[]) {

    // // select_sort
    // select_sort(arr, len);

    // // insert_sort
    // insert_sort(arr, len);

    // // merge_sort
    // int merge_temp[len];
    // merge_sort(arr, merge_temp, 0, len);
    // // merge_sort_bu
    // merge_sort_bu(arr, len);

    // heap_sort
    Heap h = Heap(arr, len);
    h.sort();

    // // output
    for (int x: arr) {
        cout << x << " ";
    }
}