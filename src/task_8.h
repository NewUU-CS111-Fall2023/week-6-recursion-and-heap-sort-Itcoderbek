#ifndef TASK_8_H
#define TASK_8_H

#include <string>

class KaratsubaMultiplier {
public:
    static std::string multiply(const std::string& num1, const std::string& num2);

private:
    static std::string add(const std::string& num1, const std::string& num2);
    static std::string subtract(const std::string& num1, const std::string& num2);
    static std::string multiplyHelper(const std::string& num1, const std::string& num2);
    static std::string karatsuba(const std::string& num1, const std::string& num2);
};

#endif // TASK_8_H
