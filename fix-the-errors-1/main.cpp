//
// Name Jon Leininger
// Date 2-2-25
// Fix the Errors #1 Programming Project
// COSC 1030
//

// This program demonstrates a compile error.

#include <iostream>
using namespace std;

int main()
{
	int number;
	float total;

	cout << "Today is a great day for Lab";
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin >> number;

	total = number * 2;
	cout << total << " is twice the number you typed" << endl;

	return 0;
}
