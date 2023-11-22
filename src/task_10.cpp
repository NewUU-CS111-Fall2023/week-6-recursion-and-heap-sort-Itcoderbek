#include "task_10.h"
#include <algorithm>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string Task10::permuteString(const std::string& s) {
    std::string vowels;

    // Separate vowels and sort them
    for (char c : s) {
        if (isVowel(c)) {
            vowels += c;
        }
    }

    std::sort(vowels.begin(), vowels.end());

    // Generate the resulting string
    std::string result;
    size_t vowelIndex = 0;

    for (char c : s) {
        if (isVowel(c)) {
            // Replace with sorted vowel
            result += vowels[vowelIndex++];
        } else {
            // Keep consonants in their original places
            result += c;
        }
    }

    return result;
}
