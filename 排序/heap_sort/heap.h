#ifndef HEAP_H
#define HEAP_H

#define PARENT(i) i/2
#define LEFT(i) 2*i
#define RIGHT(i) 2*i+1

class Heap {

private:

    int* h;
    int size;
    int heap_size;

    void swap(int i, int j) {
        int temp = this->h[i];
        this->h[i] = this->h[j];
        this->h[j] = temp;
    }

    void max_heap_ify(int i) {
        int l = LEFT(i);
        int r = RIGHT(i);
        int largest = i;
        largest = l <= this->heap_size && h[l] > this->h[largest] ? l : largest;
        largest = r <= this->heap_size && h[r] > this->h[largest] ? r : largest;
        if(largest != i) {
            swap(i, largest);
            max_heap_ify(largest);
        }
    }

public:

    Heap(int arr[], int len) {
        h = arr;
        size = len;
        heap_size = len;
        for (int i = len / 2; i >= 0; i--) max_heap_ify(i);
    }

    void sort() {
        for (int i = this->heap_size; i >= 1; i--) {
            swap(0, i);
            this->heap_size -= 1;
            max_heap_ify(0);
        }
    }

};

#endif
