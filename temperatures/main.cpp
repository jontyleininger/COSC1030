//
// Jon
// Date
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getTemps(int[], float[], int);
float getAvg(float[], int);
int largestElement(float[],int);
int smallestElement(float[], int);

int main()
{
	int numOftemps; 
	float avgTemps;
	int highTemp;
	int lowTemp;
	

	cout << "How many temperatures would you like to input?";
	cin >> numOftemps;
	while (numOftemps > 50)
	{
		cout << "invalid entry, please enter a number under 50";
		cin >> numOftemps;
	}

	float temps[numOftemps];
	int days[numOftemps];
	
	getTemps(days, temps, numOftemps);
	avgTemps = getAvg(temps, numOftemps);
	highTemp = smallestElement(temps, numOftemps);
	lowTemp = largestElement(temps, numOftemps);
	
	cout << "The average temperature of your inputs are: "
	     << fixed << setprecision(2)
	     << avgTemps
	     << endl;
	cout << "The highest temperature is: "
           << temps[highTemp]
	     << endl;
	cout << "The highest temperature is: "
	     << temps[lowTemp]	
	     << endl;
	
	
}








void getTemps (int days [], float temps [], int numOftemps)
{
	for (int type = 0; type < numOftemps; type++)
	{
	cout << "Enter a temperature on day " << type + 1
	     << ": ";
	cin >> temps[type];

	
	while (temps[type] < 0)
		{
		cout << " temp must be 0 or more. Please re-enter: ";
		cin >> temps[type];
		}
	}

}


float getAvg(float temps[], int numOftemps)
{
	float total = 0;
	for (int pos = 0; pos < numOftemps; pos++)
		total += temps[pos];
	total = total / numOftemps;
	return total; 

}


int smallestElement (float temps[], int numOftemps)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < numOftemps; pos++)
	{
		if (temps[pos] < temps[indexOfSmallest])
			indexOfSmallest = pos;
	}
	return indexOfSmallest;
}



int largestElement (float temps[], int numOftemps)
{
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < numOftemps; pos++)
	{
		if (temps[pos] > temps[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}


