#include "task_5.h"

bool Task5::isPalindrome(const std::string& word) {
    if (word.length() <= 1) {
        return true; // Single character or empty string is a palindrome
    } else if (word[0] != word[word.length() - 1]) {
        return false; // First and last characters are different, not a palindrome
    } else {
        // Recursively check the substring excluding the first and last characters
        return isPalindrome(word.substr(1, word.length() - 2));
    }
}
