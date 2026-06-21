/* *************************************************
*  Name: Michael Flores
*  Assignment: 4 - Stack Class Implementation
*  Purpose: Implementing a Stack class with push, pop, peek, and isEmpty methods
************************************************* */

#include "stack.h"

Stack::Stack() : top(-1), capacity(::DEFAULT_SIZE) {
    /* *************************************************
    Constructor for Stack. This is the default constructor
    it takes no parameters.

    @param na : na
    @return na : na
    @exception na : na
    @note When the contructor completes, the object should
          be fully ready for use. No further set-up needed.
    * ************************************************* */
    
    // Allocate memory for the stack data
    data = new int[capacity];
}

Stack::~Stack() {
    /* *************************************************
    Destructor for Stack. This is the default destructor
    it takes no parameters.

    @param na : na
    @return na : na
    @exception na : na
    @note When the destructor completes, the object should
          be fully cleaned up.
    * ************************************************* */
    
    // Deallocate memory for the stack data
    delete[] data;
}

void Stack::push(int value) {
    /* *************************************************
    Pushes an element onto the stack.
    @param (int) value : the value to push onto the stack
    @return na : na
    @exception na : na
    @note This function adds an element to the top of the stack.
    * ************************************************* */
    if (top + 1 < capacity) {
        data[++top] = value;
    } else {
        std::cerr << "Stack overflow!" << std::endl;
    }
}

int Stack::pop() {
    /* *************************************************
    Removes and returns the top element from the stack.
    @param na : na
    @return (int) : the value of the popped element
    @exception na : na
    @note This function removes the top element from the stack and returns it.
    * ************************************************* */
    if (!isEmpty()) {
        return data[top--];
    }
    std::cerr << "Stack underflow!" << std::endl;
    return -1;
}

int Stack::peek() const {
    /* *************************************************
    Returns the top element from the stack without removing it.
    @param na : na
    @return (int) : the value of the top element
    @exception na : na
    @note This function returns the top element from the stack without removing it.
    * ************************************************* */
    if (!isEmpty()) {
        return data[top];
    }
    std::cerr << "Stack is empty!" << std::endl;
    return -1;
}

bool Stack::isEmpty() const {
    /* *************************************************
    Checks if the stack is empty.
    @param na : na
    @return (bool) : true if the stack is empty, false otherwise
    @exception na : na
    @note This function checks if there are any elements in the stack.
    * ************************************************* */
    return top == -1;
}