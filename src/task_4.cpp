#include "task_4.h"

bool Task4::isPrime(int n, int divisor) {
    if (n <= 2) {
        return (n == 2);
    } else if (n % divisor == 0) {
        return false; // It is composite
    } else if (divisor * divisor > n) {
        return true; // It is prime
    } else {
        return isPrime(n, divisor + 1);
    }
}
