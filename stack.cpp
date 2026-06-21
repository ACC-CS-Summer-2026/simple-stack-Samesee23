#include "stack.h"

Stack::Stack() : top(-1), capacity(::DEFAULT_SIZE) {
    data = new int[capacity];
}

Stack::~Stack() {
    delete[] data;
}

void Stack::push(int value) {
    if (top + 1 < capacity) {
        data[++top] = value;
    } else {
        std::cerr << "Stack overflow!" << std::endl;
    }
}

int Stack::pop() {
    if (!isEmpty()) {
        return data[top--];
    }
    std::cerr << "Stack underflow!" << std::endl;
    return -1;
}

int Stack::peek() const {
    if (!isEmpty()) {
        return data[top];
    }
    std::cerr << "Stack is empty!" << std::endl;
    return -1;
}

bool Stack::isEmpty() const {
    return top == -1;
}
