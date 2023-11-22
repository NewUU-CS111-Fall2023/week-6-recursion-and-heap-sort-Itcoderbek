#include "task_9.h"

Heap::Heap(const std::vector<int>& array) : heapArray(array) {}

void Heap::buildMaxHeap() {
    int heapSize = heapArray.size();

    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        maxHeapify(i, heapSize);
    }
}

void Heap::maxHeapify(int i, int heapSize) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < heapSize && heapArray[left] > heapArray[largest]) {
        largest = left;
    }

    if (right < heapSize && heapArray[right] > heapArray[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(heapArray[i], heapArray[largest]);
        maxHeapify(largest, heapSize);
    }
}

void Heap::heapsort() {
    buildMaxHeap();

    int heapSize = heapArray.size();

    for (int i = heapSize - 1; i > 0; --i) {
        std::swap(heapArray[0], heapArray[i]);
        maxHeapify(0, i);
    }
}

const std::vector<int>& Heap::getHeapArray() const {
    return heapArray;
}
