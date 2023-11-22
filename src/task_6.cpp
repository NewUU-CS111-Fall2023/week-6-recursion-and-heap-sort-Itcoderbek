#include "task_6.h"
#include <iostream>

void readSequence(int& largest, int& secondLargest) {
    int current;
    std::cin >> current;

    if (current == 0) {
        // End of sequence
        return;
    }

    if (current > largest) {
        // Update largest and shift the previous largest to second largest
        secondLargest = largest;
        largest = current;
    } else if (current > secondLargest && current < largest) {
        // Update second largest
        secondLargest = current;
    }

    // Recursively read the next element in the sequence
    readSequence(largest, secondLargest);
}

void Task6::findSecondLargest(int& largest, int& secondLargest) {
    // Read the first two elements to initialize largest and secondLargest
    std::cin >> largest;
    std::cin >> secondLargest;

    // Ensure that largest and secondLargest are correctly initialized
    if (secondLargest > largest) {
        std::swap(largest, secondLargest);
    }

    // Recursively read the rest of the sequence
    readSequence(largest, secondLargest);
}
