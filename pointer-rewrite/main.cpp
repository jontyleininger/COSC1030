//
// Jon Lieninger
// 5-5-25
// Pointer Rewrite Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;



int doSomething (int *, int *);


int main()
{
	int total;
	int num1 = 10;
	int num2 = 2;
	cout << "Before calling the function: \n"	
	     << "num1 = " << num1 << endl
	     << "num2 = " << num2 << endl << endl;
	total = doSomething(&num1, &num2);
	cout << "The function returns: " 
	     << total << endl << endl << endl;
	cout << "After the function is called: \n" 
	     << "num1 = " << num1 << endl
	     << "num2 = " << num2 << endl << endl;

	     
	 
}



int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}