//
// Jon Leininger
// 11-5
// String Length Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;


int countChars(const char*);

int main() 
{
	char userInput[100];  

    	cout << "Enter a string: ";
    	cin.getline(userInput, 100); 

    	int length = countChars(userInput);
   	 cout << "The number of characters in the string is: " << length << endl;

   	return 0;
}


int countChars(const char* str) 
{
	int count = 0;
    
    	while (str[count] != '\0') 
    	{
        	count++;
    	}
    
    	return count;  
}