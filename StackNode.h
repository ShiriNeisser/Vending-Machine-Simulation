/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
           Oren Lowte, ID: 313321580:
*/
#include <iostream>
using namespace std;
#pragma once
class StackNode {
private:
    // Data stored in the node
    int data;

    // Pointer to the next node in the stack
    StackNode* next;

public:
    StackNode();
    // Constructor initializes the data and next member variables
    StackNode(int data);

    // Getter function for the data member
    int getData();

    // Getter function for the next member
    StackNode* getNext();

    // Setter function for the next member
    void setNext(StackNode* next);
    ~StackNode() {};
};
