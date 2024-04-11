#ifndef STACK_HPP
#define STACK_HPP

#include <string>
#include <iostream>
using namespace std;

constexpr int STK_MAX = 1000; 

class Stack {
    int _top; 
    char buf[STK_MAX]; 

public:
    Stack() : _top(-1) {} 

    void push(char c) {
        if (!isFull()) {
            buf[++_top] = c; 
        } else {
            cout << "Stack is full. Cannot push '" << c << "'\n";
        }
    }

    char pop() {
        if (!isEmpty()) {
            return buf[_top--]; 
        } else {
            cout << "Stack is empty. Cannot pop.\n";
            return '@'; 
        }
    }

    char top() {
        if (!isEmpty()) {
            return buf[_top]; 
        } else {
            cout << "Stack is empty. Top character not available.\n";
            return '@'; 
        }
    }

    bool isEmpty() {
        return _top == -1; 
    }

    bool isFull() {
        return _top == STK_MAX - 1; 
    }
};

void push_all(Stack &stk, string line) {
    for (char c : line) {
        stk.push(c);
    }
}

void pop_all(Stack &stk) {
    while (!stk.isEmpty()) {
        cout << stk.pop();
    }
    cout << '\n';
}
#endif 
