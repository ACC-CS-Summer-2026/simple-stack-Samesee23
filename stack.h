#ifndef STACK_H
#define STACK_H

const int DEFAULT_SIZE = 10;

class Stack {
private:
    int* data;
    int top;
    int capacity;

public:
    Stack();
    ~Stack();
    
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
};

#endif
