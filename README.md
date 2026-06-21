# Stack Implementation Project

This project implements a simple dynamic stack class in C++ and includes a test suite to validate stack behavior.

## Project Files

- `stack.h` - Stack class declaration.
- `stack.cpp` - Stack class implementation.
- `main.cpp` - Test driver that exercises the stack in normal, overflow, and underflow states.

## Stack Features

- Default stack capacity is defined by `DEFAULT_SIZE` in `stack.h`.
- Public methods:
  - `void push(int value)` - Add a value to the top of the stack.
  - `int pop()` - Remove and return the top value.
  - `int peek() const` - Return the top value without removing it.
  - `bool isEmpty() const` - Check whether the stack is empty.
- Overflow and underflow conditions print error messages and do not crash the program.

## Testing Behavior

`main.cpp` includes tests for:

- Normal operation (push, peek, pop, isEmpty)
- Overflow state (fill stack to capacity and attempt one more push)
- Underflow state (peek/pop on an empty stack)

The test suite is dynamic, so it adjusts to changes in `DEFAULT_SIZE` automatically.

## Build and Run

Compile the project with a C++ compiler:

```bash
g++ -I ./ *.cpp
```

Run the test suite:

```bash
./a.out
```

## Notes

- The stack storage is managed with a dynamically allocated array.
- The default capacity can be changed in `stack.h` without modifying the test cases.
