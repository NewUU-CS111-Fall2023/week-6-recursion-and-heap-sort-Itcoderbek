#include "task_8.h"
#include <algorithm>

std::string KaratsubaMultiplier::add(const std::string& num1, const std::string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    int carry = 0;
    std::string result;

    for (int i = 0; i < std::max(len1, len2) || carry; ++i) {
        int digit1 = i < len1 ? num1[len1 - i - 1] - '0' : 0;
        int digit2 = i < len2 ? num2[len2 - i - 1] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    std::reverse(result.begin(), result.end());
    return result;
}

std::string KaratsubaMultiplier::subtract(const std::string& num1, const std::string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    int borrow = 0;
    std::string result;

    for (int i = 0; i < len1; ++i) {
        int digit1 = num1[len1 - i - 1] - '0';
        int digit2 = i < len2 ? num2[len2 - i - 1] - '0' : 0;
        int diff = digit1 - digit2 - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += diff + '0';
    }

    std::reverse(result.begin(), result.end());
    return result;
}

std::string KaratsubaMultiplier::multiplyHelper(const std::string& num1, const std::string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();

    if (len1 == 0 || len2 == 0) {
        return "0";
    }

    if (len1 <= 2 || len2 <= 2) {
        // Use standard multiplication for small numbers
        return std::to_string(std::stoi(num1) * std::stoi(num2));
    }

    int halfLen = std::min(len1, len2) / 2;

    std::string high1 = num1.substr(0, len1 - halfLen);
    std::string low1 = num1.substr(len1 - halfLen);
    std::string high2 = num2.substr(0, len2 - halfLen);
    std::string low2 = num2.substr(len2 - halfLen);

    std::string z0 = multiplyHelper(low1, low2);
    std::string z1 = multiplyHelper(add(low1, high1), add(low2, high2));
    std::string z2 = multiplyHelper(high1, high2);

    std::string temp = subtract(z1, add(z2, z0));

    for (int i = 0; i < 2 * halfLen; ++i) {
        z0 += "0";
        temp += "0";
    }

    return add(add(z2, temp), z0);
}

std::string KaratsubaMultiplier::karatsuba(const std::string& num1, const std::string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();

    // Make the lengths equal and even
    int maxLength = std::max(len1, len2);
    int n = (maxLength % 2 == 1) ? maxLength + 1 : maxLength;
    
    std::string paddedNum1 = std::string(n - len1, '0') + num1;
    std::string paddedNum2 = std::string(n - len2, '0') + num2;

    return multiplyHelper(paddedNum1, paddedNum2);
}

std::string KaratsubaMultiplier::multiply(const std::string& num1, const std::string& num2) {
    return karatsuba(num1, num2);
}
