//
// Jon Leininger
// 4-19-25
// Chips and Salsa Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getSales(string[], int[], int);
int getTotal(int[], int);
int largestElement(int[],int);
int smallestElement(int[], int);

int main()
{
	const int SALSA_TYPES = 5;
	string names[SALSA_TYPES] = { "mild", "medium", "sweet", "hot", "zesty" };
	int sales[SALSA_TYPES];
	int totalJarsSold;
	int highSalesProduct;
	int lowSalesProduct;

	getSales(names, sales, SALSA_TYPES);

	totalJarsSold = getTotal(sales, SALSA_TYPES);
	highSalesProduct = largestElement(sales, SALSA_TYPES);
	lowSalesProduct = smallestElement(sales, SALSA_TYPES);

	cout << endl << endl;
	cout << "     Salsa Sales Report \n\n";
	cout << "Name              Jars Sold \n";
	cout << "____________________________\n";
	
	for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++)
	{
		cout << setw(6) << names[salsaType]
		     << setw(21) << sales[salsaType]
		     << endl;
	}

	

	cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
	cout << "High Seller: " << names[highSalesProduct] << endl;
	cout << "Low Seller; " << names[lowSalesProduct] << endl;
	
	return 0;
}


void getSales( string names[], int sales[], int size)
{
	for (int type = 0; type < size; type++)
	{
	cout << "How many jars of " << names[type]
	     << " salsa did we sell last month? ";
	cin >> sales[type];

	
	while (sales[type] < 0)
		{
		cout << "Jars sold must be 0 or more. Please re-enter: ";
		cin >> sales[type];
		}
	}
} 




int getTotal(int array[], int size)
{
	int total = 0;
	
	for (int pos = 0; pos < size; pos++)
		total += array[pos];
	return total; 
}




int largestElement (int array[], int size)
{
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < size; pos++)
	{
		if (array[pos] > array[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}


int smallestElement (int array[], int size)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < size; pos++)
	{
		if (array[pos] < array[indexOfSmallest])
			indexOfSmallest = pos;
	}
	return indexOfSmallest;
}
