#include <iostream>
using namespace std;

void arr_to_string(int arr[], int len) {
    for (int i = 0; i < len; i++) { cout << arr[i] << " "; }
}

/** 选择排序
 * 时间复杂度：N^2/2 + N
 *  缺点：运行时间与初始输入数组中排列无关
 *  优点：只交换 N 次，数据移动是最小的
 * 空间复杂度：O(1)
 */
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

/** 插入排序
 * 时间复杂度：平均 N^2/4 + N^2/4 
 *  最差 N^2/2 + N^2/2 
 *  最好 N-1 + 0
 *  优点：对于部分有序的输入数组，消耗时间是线性的，在这种情况下，其速度可能远高于其他排序算法
 *  缺点：对于大规模乱序数组，表现很差
 * 空间复杂度：O(1)
 * 优化：在内循环中将较大的元素右移，而不是每次交换两个元素
 */
void insert_sort(int arr[], int len) {
    int value, t;
    for (int i = 1; i < len; i++) {
        value = arr[i];
        t = i;
        while (--t >= 0 && arr[t] > value) { arr[t + 1] = arr[t]; }
        arr[t + 1] = value;
    }
}

/** 希尔排序 基于插排，交换不相邻的元素来对输入数组的局部进行排序，然后再使用插排
 * 时间复杂度：
 */
void shell_sort(int arr[], int len) {
}

/** 归并排序
 * 
 */

/** 快速排序
 * 
 */
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
