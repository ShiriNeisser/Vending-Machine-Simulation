/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
           Oren Lowte, ID: 313321580:
*/
#include <iostream>
#include"StackNode.h"
#pragma once
using namespace std;

class Stack {
private:
    // Pointer to the top element of the stack
    StackNode* top;

public:

    // Constructor initializes the top member variable to nullptr
    Stack();

    // isEmpty function returns true if the stack is empty, false otherwise
    bool isEmpty();


    // Push function adds a new element to the top of the stack
    void push(StackNode node);

    // Pop function removes the top element from the stack and returns its value
    int pop();

    // Peek function returns the value of the top element without modifying the stack
    int peek();

    ~Stack();





};
