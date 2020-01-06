#include <iostream>
#include <cstring>

using namespace std;

int main() {
	const int MAX_CHAR = 20;
	char input[MAX_CHAR];

	cout << "Type HELP to view the commands and their functions." << endl;
	cin.get(input, 20);
	
	if (strcmp(input, "HELP") == 0) {
		cout << "Type ADD to add a student." << endl;
	       	cout << "Type PRINT to print all the students." << endl;
		cout << "Type AVERAGE to average all the GPAs." << endl;
		cout << "Type DELETE to delete a student." << endl;
		cout << "Type QUIT to exit the program." << endl;
	}
	

	
	return 0;
}
