#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

//Initiate a node with the student that it will hold and point it to nothing
Node::Node(Student* newStudent) {
	student = newStudent;
	next = NULL;
}

//Deallocate the student pointer and node pointer
Node::~Node() {
	delete student;
	//delete next;
	//deleted this line since it makes it impossible to delete specific nodes
}

//Return node that this node is pointing to
Node* Node::getNext() {
	return next;
}

Student* Node::getStudent() {
	return student;
}

void Node::setNext(Node* newNext) {
	next = newNext;
}
