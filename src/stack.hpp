#include <iostream>
#include "stack.hpp" 

int main() {
    Stack stk; 
    string line; 

    while (getline(std::cin, line)) { 
        push_all(stk, line); 
        pop_all(stk); 
    }

    return 0; 
}
