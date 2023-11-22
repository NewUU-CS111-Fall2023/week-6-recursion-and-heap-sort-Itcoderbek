#include "task_1.h"
#include <iostream>

void Task1::printNumbers(int A, int B) {
    if (A <= B) {
        std::cout << A << " ";
        printNumbers(A + 1, B);
    } else {
        std::cout << std::endl; // Print newline at the end
    }
}
