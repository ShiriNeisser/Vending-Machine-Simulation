/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
           Oren Lowte, ID: 313321580:
*/
#include <iostream>
#include "Stack.h"
#include <climits>
using namespace std;
//#include"StackNode.h"


// Constructor initializes the top member variable to nullptr
Stack::Stack() { top = NULL; }
Stack::~Stack() { //default destructor //cout << "Stack default destructor" << endl; //DEBUG print
    while (!isEmpty()) { StackNode* temp = top; top = top->getNext(); delete temp; }
}
// isEmpty function returns true if the stack is empty, false otherwise
bool Stack::isEmpty() { return  (top == NULL); }


// Push function adds a new element to the top of the stack
void Stack::push(StackNode node) {
    // Create a new StackNode object with the given data
    StackNode* newNode = new StackNode(node.getData());
    // Set the next member of the new node to the current top of the stack
    newNode->setNext(top);
    // Update the top of the stack to be the new node
    top = newNode;
}

// Pop function removes the top element from the stack and returns its value
int Stack::pop() {
    // If the stack is empty, return INT_MIN
    // Save a pointer to the top element of the stack
    if (isEmpty()) { cout << "Stack empty" << endl; return INT_MIN; }
    else {
        int data = top->getData();
        cout << "Removing " << data << endl;
        StackNode* temp = top;
        top = top->getNext();
        delete temp;
        return data;
    }
}
// Peek function returns the value of the top element without modifying the stack
int Stack::peek() {

    return top->getData();
}

