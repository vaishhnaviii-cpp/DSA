//1.swap using pointers
/*
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
// 2.swap using references
/*
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}*/

//3.traverse an array using pointer
/*
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    int* pointer = numbers;

    for (int index = 0; index < size; index++) {
        cout << *(pointer + index) << " ";
    }

    return 0;
}  */

//4.traverse an array using reference
/*
void traverseArray(int (&arr)[5]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
*/

//5.find maximum using reference
/*
int& findMaximum(int (&arr)[5]) {
    int& max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
*/

//6.find maximum using pointer
/*
int* findMaximum(int* arr, int size) {
    int* max = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return max;
}
*/

//7.dynamic memory allocation using pointer
/*
int* createArray(int size) {
    return new int[size];
}
*/

//8.linked list implementation using pointers
/*
struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
*/
