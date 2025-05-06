//
// Jon Leininger
// 5-2-25
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;


void bubbleSort(int array[], int size, int &exchangeCount);
void selectionSort(int array[], int size, int &exchangeCount);
void displayArray(const int array[], int size);

int main() 
{
	const int SIZE = 20;
    	int originalArray[SIZE] = {80, 10, 14, 37, 13, 16, 1, 9, 23, 41,
                               39, 17, 2, 35, 7, 18, 28, 31, 4, 8};

    	int bubbleArray[SIZE];
	int selectionArray[SIZE];
    	int bubbleExchanges = 0;
	int selectionExchanges = 0;

    
    	for (int i = 0; i < SIZE; i++) 
	{
        	bubbleArray[i] = originalArray[i];
        	selectionArray[i] = originalArray[i];
   	}

   
   	bubbleSort(bubbleArray, SIZE, bubbleExchanges);

    
    	selectionSort(selectionArray, SIZE, selectionExchanges);

    
    	cout << "Bubble Sort Result:\n";
    	displayArray(bubbleArray, SIZE);
    	cout << "Number of exchanges: " << bubbleExchanges << "\n\n";

   	cout << "Selection Sort Result:\n";
   	displayArray(selectionArray, SIZE);
    	cout << "Number of exchanges: " << selectionExchanges << "\n";

   	return 0;
}

void bubbleSort(int array[], int size, int &exchangeCount) 
{
	bool swapped;
    	for (int i = 0; i < size - 1; i++)
	{
        	swapped = false;
        	for (int j = 0; j < size - i - 1; j++) 
		{
            		if (array[j] > array[j + 1]) 
			{
             			int temp = array[j];
                		array[j] = array[j + 1];
                		array[j + 1] = temp;
                		exchangeCount++;
                		swapped = true;
            		}
        	}
        	if (!swapped) break; 
    	}
}

void selectionSort(int array[], int size, int &exchangeCount) 
{
	for (int i = 0; i < size - 1; i++) 
	{
        	int minIndex = i;
        	for (int j = i + 1; j < size; j++) 
		{
            		if (array[j] < array[minIndex]) 
			{
               	 		minIndex = j;
            		}
        	}
       		if (minIndex != i) 	
		{
            		int temp = array[i];
            		array[i] = array[minIndex];
           		array[minIndex] = temp;
            		exchangeCount++;
        	}
    	}
}	

void displayArray(const int array[], int size) 
{
    	for (int i = 0; i < size; i++) 
	{
        	cout << array[i] << " ";
    	}
    	cout << endl;
}

