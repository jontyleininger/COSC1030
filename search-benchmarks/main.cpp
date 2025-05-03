//
// Jon Leininger
// 5-2-25
// Search Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int linearSearch(int array[], int size, int target, int &comparisons);
int binarySearch(int array[], int size, int target, int &comparisons);

int main()
{
int index1;
int index2;
int comparisonCount;
int comparisonCount2;
int target = 32;
int size = 20;
int array[] = { 1, 2, 3, 10, 14, 27, 30, 32, 35, 38, 42, 49, 50, 52, 59, 62, 69, 70, 74, 90};

index1 = linearSearch(array, size, target, comparisonCount);
index2 = binarySearch(array, size, target, comparisonCount2);

cout << "the number of comparisons made by the linear search is :" << comparisonCount
     << endl;
cout << "the number of comparisons made by the binary search is :" <<  comparisonCount2
     << endl;

}







int linearSearch(int array[], int size, int target, int &comparisons)
{
	comparisons = 0;
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found)
	{	
		comparisons++;
		if (array[index] == target)
		{
			found = true;
			position = index;
		}
		index++;
		
	}
return position; 
}





int binarySearch(int array[], int size, int target, int &comparisons)
{	
	comparisons = 0;
	int first = 0;
	int last = size - 1;
	int middle;
	int position = -1;
	bool found = false; 
	while (!found && first <= last)
	{	
		middle = (first + last) / 2;
		comparisons++;
		if (array[middle] == target)
		{
			found = true;
			position = middle;
		}
		else if(array[middle] > target)
			last = middle -1;
		else 
			first = middle + 1; 
		
		
	}
return position; 
}
