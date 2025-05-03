//
// Jon Leininger 
// 5-3-25
// Integer Array
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getElements(int[], int);
void bubbleSort(int[], int);
void swap(int[], int);
int meancalc(int[], int);
int binarySearch(int[], int, int);



int main()
{
	int elements;
	int target;
	int mean;
	int location;
	cout << "how many elements would you like to input?" << endl; 
	cin >> elements;
	cout << "you would like to enter " << elements << " integers." << endl;
	
	while (elements > 50)
	{
		cout << "invalid entry, please enter a number under 50";
		cin >> elements;
	}
	
	int array[elements];
	getElements(array, elements);
	cout << "your array of integers is:" << endl;
	for (int i = 0; i < elements; i++)
		cout << array[i] << endl;

	bubbleSort(array, elements);
	
	cout << "your numbers in order are" << endl;
	for (int i = 0; i < elements; i++)
		cout << array[i] << endl;

	
	mean = meancalc(array, elements);
	cout << "the mean of your array is: " << mean << endl;
	
	cout << "what number would you like to search for?";
	cin >> target;
	cout << "the number you would like to search for is: " << target << endl;

	location = binarySearch(array, elements, target);
	
	if ( location == -1)
		cout << "that number was not found" << endl;
	else
		cout << "that number is located in element: " << location << endl;	

	
	
	


}










void getElements(int array[], int elements)
{	
	for (int index = 0; index < elements; index++)
	{
	cout << "Enter a integer for element " << index << ":"; 
	cin >> array[index];

	
	while (array[index] < 0)
		{
		cout << " number must be 0 or more. Please re-enter: ";
		cin >> array[index];
		}
	}
}


void bubbleSort(int array[], int elements)
{
	int maxElement;
	int index;	

	for (maxElement = elements - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
				swap(array[index], array[index + 1]);
		}
	}
}






void swap(int &a, int &b)
{
	int var = a;
	a = b;
	b =  var;

}



int meancalc(int array[], int elements)
{
	int i;
	int sum;
	int total;	
	for (i = 0; i < elements; i++)
		sum += array[i];
	total = (sum / elements);

	return total;
	
}




int binarySearch (int array[], int elements, int target)
{
	int first = 0, last = (elements - 1), middle, position = -1;
	bool found = false; 
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == target)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > target)
			last = middle - 1;
		else	
			first = middle + 1;
	}
	return position;

}








