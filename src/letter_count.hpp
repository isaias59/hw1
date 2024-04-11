#ifndef LETTER_COUNT_HPP
#define LETTER_COUNT_HPP
#include <string>

int char_to_index(char ch);
char index_to_char(int i);
void count(std::string s, int counts[]);
void print_counts(const int counts[], int len);

#endif
