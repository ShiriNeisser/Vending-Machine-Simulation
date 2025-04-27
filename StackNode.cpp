/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
		   Oren Lowte, ID: 313321580:
*/

#include <iostream>
#include "StackNode.h"
// Constructor initializes the data and next member variables
StackNode::StackNode() {
	this->next = NULL;

}

StackNode::StackNode(int data) {
	this->data = data; this->next = NULL;
}



// Getter function for the data member
int StackNode::getData() { return data; }

// Getter function for the next member
StackNode* StackNode::getNext() { return next; }

// Setter function for the next member
void StackNode::setNext(StackNode* next) { this->next = next; }