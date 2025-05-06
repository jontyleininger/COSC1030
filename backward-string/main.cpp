//
// Jon Leininger
// 5-6-25
// Backward String Programming Project
// COSC 1030
//
#include <cstring> 
#include <iostream>
using namespace std;


void backward(char *);

int main()
{
	const int SIZE = 80;
	char input[SIZE];
	cout << "Enter a string and I will display it backward:\n";
	cin.getline(input, SIZE);
	
	backward(input);
	return 0;
}



void backward( char *str)
{
	int last = strlen(str)-1;
	for (int index = last; index >= 0; index--)
		cout << str[index];
	cout << endl;
}