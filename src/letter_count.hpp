
#ifndef LETTER_COUNT_HPP
#define LETTER_COUNT_HPP

#include <string>
#include <cctype>
#include <iostream>

constexpr int N_CHARS = ('Z'-'A'+1); 

inline int char_to_index(char ch) {
    return std::toupper(ch) - 'A';
}

inline char index_to_char(int i) {
    return 'A' + i;
}

inline void count(std::string s, int counts[]) {
    for (char ch : s) {
        if (std::isalpha(ch)) {
            int index = char_to_index(ch);
            counts[index]++;
        }
    }
}

inline void print_counts(const int counts[], int len) {
    for (int i = 0; i < len; ++i) {
        std::cout << index_to_char(i) << ' ' << counts[i] << std::endl;
    }
}

#endif

