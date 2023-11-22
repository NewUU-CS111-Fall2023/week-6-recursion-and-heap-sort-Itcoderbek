#ifndef TASK_9_H
#define TASK_9_H

#include <vector>

class Heap {
private:
    std::vector<int> heapArray;

public:
    Heap(const std::vector<int>& array);

    void buildMaxHeap();
    void maxHeapify(int i, int heapSize);
    void heapsort();

    const std::vector<int>& getHeapArray() const;
};

#endif // TASK_9_H
