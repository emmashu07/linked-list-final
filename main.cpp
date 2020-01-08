#include <iostream>
#include <cstring>
#include <cctype>
#include "Node.h"
#include "student.h"

using namespace std;

Node* addHead();
Student* readInStudent();

const int MAX_CHAR = 20;

int main() {
	char input[MAX_CHAR];
	bool running = true;
	bool isHead = true;
	Node* head = NULL;

	cout << "Type HELP to view the commands and their functions." << endl;

	while (running) {
		cin.get(input, MAX_CHAR);
		cin.ignore(MAX_CHAR, '\n');

		for(int i = 0; i < strlen(input); i++) {
			input[i] = toupper(input[i]);
		}
	
		if (strcmp(input, "HELP") == 0) {
			cout << "Type ADD to add a student." << endl;
	       		cout << "Type PRINT to print all the students." << endl;
			cout << "Type AVERAGE to average all the GPAs." << endl;
			cout << "Type DELETE to delete a student." << endl;
			cout << "Type QUIT to exit the program." << endl;
		}
		else if (strcmp(input, "ADD") == 0) {
			if(isHead) {
				head = addHead();
				isHead = false;
			}
			else {
				//addNode(head*);
			}
		}			
		else if (strcmp(input, "QUIT") == 0) {
			running = false;
		}
		else {
			cout << "Not a valid command." << endl;
			cout << "Type HELP to view commands and their functions." << endl;
		}
	}	
	return 0;
}

Node* addHead() {
        Node* node = new Node(readInStudent());
	return node;
}

Student* readInStudent() {
	char firstName[MAX_CHAR];
	char lastName[MAX_CHAR];
	int id;
	float gpa;

	cout << "Please enter in the first name of the student: ";
	cin.get(firstName, MAX_CHAR);
	cin.ignore(MAX_CHAR, '\n');
	cout << "\nPlease enter in the last name of the student: ";
	cin.get(lastName, MAX_CHAR);
	cin.ignore(MAX_CHAR, '\n');
	cout << "\nPlease enter in the student ID of the student: ";
	cin >> id;
	cin.ignore(MAX_CHAR, '\n');
	cout << "\nPlease enter in the GPA of the student: ";
	cin >> gpa;
	cin.ignore(MAX_CHAR, '\n');
	Student* student = new Student(firstName, lastName, id, gpa);
	return student;
}
