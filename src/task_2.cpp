#include "task_2.h"
#include <iostream>

void Task2::checkPowerOfTwo(int N) {
    if (N == 1) {
        std::cout << "YES" << std::endl;
    } else if (N % 2 == 0 && N > 1) {
        checkPowerOfTwo(N / 2);
    } else {
        std::cout << "NO" << std::endl;
    }
}
