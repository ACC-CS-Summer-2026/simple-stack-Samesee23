/* *************************************************
*  Name: Michael Flores
*  Assignment: 4 - Stack Class Implementation
*  Purpose: Create a Stack class with push, pop, peek, and isEmpty methods, and test it in various states.
************************************************* */

#include "main.h"

int main() {
     /* **********************************
     * Main function to test the Stack class in normal, overflow, and underflow states.
     *
     * @param na : na
     * @return (int) : application exit code
     * @exception na : na
     * @note na
     * **********************************/

    std::cout << "========================================" << std::endl;
    std::cout << "     STACK COMPREHENSIVE TEST SUITE     " << std::endl;
    std::cout << "========================================" << std::endl;

    std::cout << "\n========== NORMAL STATE (Neither Overflow nor Underflow) ==========" << std::endl;
    Stack testStack1;
    
    int numElements = DEFAULT_SIZE / 2;
    
    std::cout << "\nTesting isEmpty() - should be true for new stack:" << std::endl;
    std::cout << "isEmpty(): " << (testStack1.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting push() with " << numElements << " elements:" << std::endl;
    for (int i = 0; i < numElements; i++) {
        testStack1.push((i + 1) * 10);
        std::cout << "Pushed: " << ((i + 1) * 10) << std::endl;
    }
    
    std::cout << "\nTesting isEmpty() - should be false after push:" << std::endl;
    std::cout << "isEmpty(): " << (testStack1.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting peek() - should return " << testStack1.peek() << " without removing:" << std::endl;
    std::cout << "peek(): " << testStack1.peek() << std::endl;
    std::cout << "peek() again: " << testStack1.peek() << std::endl;
    
    int numPops = numElements / 2;
    std::cout << "\nTesting pop() - removing " << numPops << " elements in LIFO order:" << std::endl;
    for (int i = 0; i < numPops; i++) {
        std::cout << "pop(): " << testStack1.pop() << std::endl;
    }
    
    std::cout << "\nTesting peek() after pop:" << std::endl;
    std::cout << "peek(): " << testStack1.peek() << std::endl;
    
    std::cout << "\nTesting isEmpty() - should still be false:" << std::endl;
    std::cout << "isEmpty(): " << (testStack1.isEmpty() ? "true" : "false") << std::endl;

    std::cout << "\n========== OVERFLOW STATE ==========" << std::endl;
    Stack testStack2;
    
    std::cout << "\nFilling stack to capacity of " << DEFAULT_SIZE << std::endl;
    for (int i = 0; i < DEFAULT_SIZE; i++) {
        testStack2.push(i * 100);
        std::cout << "Pushed: " << (i * 100) << std::endl;
    }
    
    std::cout << "\nTesting isEmpty() - should be false when full:" << std::endl;
    std::cout << "isEmpty(): " << (testStack2.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting peek() at capacity:" << std::endl;
    std::cout << "peek(): " << testStack2.peek() << std::endl;
    
    std::cout << "\nAttempting to push() beyond capacity (overflow):" << std::endl;
    testStack2.push(9999);
    std::cout << "Attempted to push 9999 (should show overflow error)" << std::endl;
    
    std::cout << "\nTesting peek() - should still return:" << testStack2.peek() << std::endl;
    std::cout << "peek(): " << testStack2.peek() << std::endl;
    
    std::cout << "\nTesting pop() - removing one element:" << std::endl;
    std::cout << "pop(): " << testStack2.pop() << std::endl;
    
    std::cout << "\nTesting isEmpty() after pop:" << std::endl;
    std::cout << "isEmpty(): " << (testStack2.isEmpty() ? "true" : "false") << std::endl;

    std::cout << "\n========== UNDERFLOW STATE ==========" << std::endl;
    Stack testStack3;
    
    std::cout << "\nTesting isEmpty() - should be true for new stack:" << std::endl;
    std::cout << "isEmpty(): " << (testStack3.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nAttempting peek() on empty stack (underflow):" << std::endl;
    testStack3.peek();
    std::cout << "Peek attempted (should show error message)" << std::endl;
    
    std::cout << "\nTesting pop() on empty stack (underflow):" << std::endl;
    testStack3.pop();
    std::cout << "Pop attempted (should show error message)" << std::endl;
    
    std::cout << "\nTesting isEmpty() - should still be true:" << std::endl;
    std::cout << "isEmpty(): " << (testStack3.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nPushing one element:" << std::endl;
    testStack3.push(42);
    std::cout << "Pushed: 42" << std::endl;
    
    std::cout << "\nTesting peek() with one element:" << std::endl;
    std::cout << "peek(): " << testStack3.peek() << std::endl;
    
    std::cout << "\nTesting pop() with one element:" << std::endl;
    std::cout << "pop(): " << testStack3.pop() << std::endl;
    
    std::cout << "\nTesting isEmpty() after popping last element:" << std::endl;
    std::cout << "isEmpty(): " << (testStack3.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nAttempting pop() on now-empty stack (underflow again):" << std::endl;
    testStack3.pop();
    std::cout << "Pop attempted (should show error message)" << std::endl;
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "        ALL TESTS COMPLETED           " << std::endl;
    std::cout << "========================================" << std::endl;
    
    return 0;
}
