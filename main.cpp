#include "main.h"

void testNormalState() {
    std::cout << "\n========== NORMAL STATE (Neither Overflow nor Underflow) ==========" << std::endl;
    Stack s;
    
    int numElements = DEFAULT_SIZE / 2;
    
    std::cout << "\nTesting isEmpty() - should be true for new stack:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting push() with " << numElements << " elements:" << std::endl;
    for (int i = 0; i < numElements; i++) {
        s.push((i + 1) * 10);
        std::cout << "Pushed: " << ((i + 1) * 10) << std::endl;
    }
    
    std::cout << "\nTesting isEmpty() - should be false after push:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting peek() - should return " << s.peek() << " without removing:" << std::endl;
    std::cout << "peek(): " << s.peek() << std::endl;
    std::cout << "peek() again: " << s.peek() << std::endl;
    
    int numPops = numElements / 2;
    std::cout << "\nTesting pop() - removing " << numPops << " elements in LIFO order:" << std::endl;
    for (int i = 0; i < numPops; i++) {
        std::cout << "pop(): " << s.pop() << std::endl;
    }
    
    std::cout << "\nTesting peek() after pop:" << std::endl;
    std::cout << "peek(): " << s.peek() << std::endl;
    
    std::cout << "\nTesting isEmpty() - should still be false:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
}

void testOverflowState() {
    std::cout << "\n========== OVERFLOW STATE ==========" << std::endl;
    Stack s;
    
    std::cout << "\nFilling stack to capacity of " << DEFAULT_SIZE << std::endl;
    for (int i = 0; i < DEFAULT_SIZE; i++) {
        s.push(i * 100);
        std::cout << "Pushed: " << (i * 100) << std::endl;
    }
    
    std::cout << "\nTesting isEmpty() - should be false when full:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nTesting peek() at capacity:" << std::endl;
    std::cout << "peek(): " << s.peek() << std::endl;
    
    std::cout << "\nAttempting to push() beyond capacity (overflow):" << std::endl;
    s.push(9999);
    std::cout << "Attempted to push 9999 (should show overflow error)" << std::endl;
    
    std::cout << "\nTesting peek() - should still return:" << s.peek() << std::endl;
    std::cout << "peek(): " << s.peek() << std::endl;
    
    std::cout << "\nTesting pop() - removing one element:" << std::endl;
    std::cout << "pop(): " << s.pop() << std::endl;
    
    std::cout << "\nTesting isEmpty() after pop:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
}

void testUnderflowState() {
    std::cout << "\n========== UNDERFLOW STATE ==========" << std::endl;
    Stack s;
    
    std::cout << "\nTesting isEmpty() - should be true for new stack:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nAttempting peek() on empty stack (underflow):" << std::endl;
    s.peek();
    std::cout << "Peek attempted (should show error message)" << std::endl;
    
    std::cout << "\nTesting pop() on empty stack (underflow):" << std::endl;
    s.pop();
    std::cout << "Pop attempted (should show error message)" << std::endl;
    
    std::cout << "\nTesting isEmpty() - should still be true:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nPushing one element:" << std::endl;
    s.push(42);
    std::cout << "Pushed: 42" << std::endl;
    
    std::cout << "\nTesting peek() with one element:" << std::endl;
    std::cout << "peek(): " << s.peek() << std::endl;
    
    std::cout << "\nTesting pop() with one element:" << std::endl;
    std::cout << "pop(): " << s.pop() << std::endl;
    
    std::cout << "\nTesting isEmpty() after popping last element:" << std::endl;
    std::cout << "isEmpty(): " << (s.isEmpty() ? "true" : "false") << std::endl;
    
    std::cout << "\nAttempting pop() on now-empty stack (underflow again):" << std::endl;
    s.pop();
    std::cout << "Pop attempted (should show error message)" << std::endl;
}

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "     STACK COMPREHENSIVE TEST SUITE     " << std::endl;
    std::cout << "========================================" << std::endl;
    
    testNormalState();
    testOverflowState();
    testUnderflowState();
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "        ALL TESTS COMPLETED           " << std::endl;
    std::cout << "========================================" << std::endl;
    
    return 0;
}
