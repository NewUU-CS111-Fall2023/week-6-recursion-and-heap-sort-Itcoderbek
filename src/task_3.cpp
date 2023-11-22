#include "task_3.h"

int Task3::sumOfDigits(int N) {
    if (N == 0) {
        return 0;
    } else {
        return N % 10 + sumOfDigits(N / 10);
    }
}
