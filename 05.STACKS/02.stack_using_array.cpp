#include <iostream>
using namespace std;        
int main() {
    const int MAX = 100; // Maximum size of the stack
    int stack[MAX]; // Array to hold stack elements
    int top = -1; // Initialize top of stack

    // Push elements onto the stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Top element: " << stack[top] << endl; // Output: 30

    // Pop an element from the stack
    top--;
    cout << "Top element after pop: " << stack[top] << endl; // Output: 20

    cout << "Stack size: " << (top + 1) << endl; // Output: 2
    cout << "Is stack empty? " << (top == -1 ? "Yes" : "No") << endl; // Output: No

    return 0;
}