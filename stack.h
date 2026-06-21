/* *************************************************
*  Name: Michael Flores
*  Assignment: 4 - Stack Class Implementation
*  Purpose: Create a Stack class with push, pop, peek, and isEmpty methods
************************************************* */

#ifndef STACK_H
#define STACK_H

#include <iostream>
const int DEFAULT_SIZE = 10;

class Stack {
private:
    /********************************************
    Private member variables for the Stack class.
    *********************************************/
    int* data;
    int top;
    int capacity;

public:
    /**********************
    Constructors/Destructor
    ***********************/
    Stack();
    ~Stack();
    
    /**********************
    Public member functions for the Stack class.
    ***********************/
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
};

#endif
