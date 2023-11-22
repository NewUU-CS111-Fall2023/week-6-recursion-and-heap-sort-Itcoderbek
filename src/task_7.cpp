#include "task_7.h"

int Task7::reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    } else {
        // Multiply the current reversed number by 10 and add the last digit of n
        return reverseNumber(n / 10, reversed * 10 + n % 10);
    }
}
