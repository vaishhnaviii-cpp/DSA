#include<iostream>    
using namespace std;   
struct Node {  
    int data; 
    Node* next;  
    Node(int x):data(x), next(nullptr) {}   // Constructor to initialize node with data and next pointer
};
int main(){
    Node* top = nullptr; // Initialize top of stack
Node* newNode = new Node(10);             // Create a new node with data 10
    newNode->next = top;               // Link the new node to the current top
    top = newNode;                      // Update top to the new node

    newNode = new Node(20);            // Create a new node with data 20
    newNode->next = top;                // Link the new node to the current top
    top = newNode;                  // Update top to the new node

    newNode = new Node(30);                         // Create a new node with data 30
    newNode->next = top;                        // Link the new node to the current top
    top = newNode;                              // Update top to the new node

    cout << "Top element: " << top->data << endl; // Output: 30

    // Pop an element from the stack
    Node* temp = top;                  // Store the current top in a temporary variable
    top = top->next;                    // Update top to the next node
    delete temp;                      // Delete the old top node

    cout << "Top element after pop: " << top->data << endl; // Output: 20

    // Clean up remaining nodes
    while (top != nullptr) {
        temp = top;
        top = top->next;
        delete temp;
    }

    return 0;

   
}