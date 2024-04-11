
#include <iostream>
#include <cctype> 
#include "letter_count.hpp"

constexpr int N_CHARS = ('Z'-'A'+1); 

int char_to_index(char ch) {
    return std::toupper(ch) - 'A';
}

char index_to_char(int i) {
    return 'A' + i;
}

void count(std::string s, int counts[]) {
    for (char ch : s) {
        if (std::isalpha(ch)) {
            int index = char_to_index(ch);
            counts[index]++;
        }
    }
}

void print_counts(const int counts[], int len) {
    for (int i = 0; i < len; ++i) {
        std::cout << index_to_char(i) << ' ' << counts[i] << '\n';
    }
}

int main() {
    int counts[N_CHARS] = {};
    std::string line;
    while (std::getline(std::cin, line)) {
        count(line, counts);
    }
    print_counts(counts, N_CHARS);
    return 0;
}
