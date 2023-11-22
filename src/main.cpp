#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h" 
#include "task_10.h"

int main() {
    // Task 1
    std::cout << "Task 1:" << std::endl;
    Task1::printNumbers(3, 8);

    // Task 2
    std::cout << "\nTask 2:" << std::endl;
    Task2::checkPowerOfTwo(16);

    // Task 3
    std::cout << "\nTask 3:" << std::endl;
    std::cout << "Sum of digits: " << Task3::sumOfDigits(12345) << std::endl;

    // Task 4
    std::cout << "\nTask 4:" << std::endl;
    std::cout << (Task4::isPrime(13) ? "YES" : "NO") << std::endl;

    // Task 5
    std::cout << "\nTask 5:" << std::endl;
    std::cout << (Task5::isPalindrome("level") ? "YES" : "NO") << std::endl;

    // Task 6
    std::cout << "\nTask 6:" << std::endl;
    int largest, secondLargest;
    Task6::findSecondLargest(largest, secondLargest);
    std::cout << "Second Largest: " << secondLargest << std::endl;

    // Task 7
    std::cout << "\nTask 7:" << std::endl;
    std::cout << "Reversed Number: " << Task7::reverseNumber(12345) << std::endl;
     // Task 8
    std::cout << "\nTask 8:" << std::endl;
    std::string num1 = "12345678901234567890";
    std::string num2 = "98765432109876543210";

    std::string result = KaratsubaMultiplier::multiply(num1, num2);
    std::cout << "Product: " << result << std::endl;

     // Task 9
    std::cout << "\nTask 9:" << std::endl;
    std::vector<int> array1 = {4, 10, 3, 5, 1};
    Heap heap1(array1);
    heap1.heapsort();

    const std::vector<int>& sortedArray1 = heap1.getHeapArray();
    std::cout << "Sorted Array 1: ";
    for (int num : sortedArray1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> array2 = {25, 17, 36, 2, 8, 19, 1};
    Heap heap2(array2);
    heap2.heapsort();

    const std::vector<int>& sortedArray2 = heap2.getHeapArray();
    std::cout << "Sorted Array 2: ";
    for (int num : sortedArray2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
     // Task 10
    std::cout << "\nTask 10:" << std::endl;
    std::cout << "Permuted String: " << Task10::permuteString("aBcDeFGhi") << std::endl;


    return 0;
}

