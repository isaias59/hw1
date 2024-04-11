
#include "letter_count.hpp"

int main() {
    int counts[N_CHARS] = {};
    std::string line;
    while (std::getline(std::cin, line)) {
        count(line, counts);
    }
    print_counts(counts, N_CHARS);
    return 0;
}
