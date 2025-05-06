//
// Jon Leininger
// 5-5-25
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int yearlySum(int *, int);
int yearlyAvg(int , int);


int main () 
{
	int *monthlySales; 
	int size;
	int sum;
	int avg;

	cout << "How many months would you like to input?" << endl;
	cin >> size;

	monthlySales = new int[size];

	for (int index = 0; index < size; index++)
	{
		cout << "Enter the monthly sales for Month " << (index+1) << ": "; 
		cin >> monthlySales[index];
	}
	
	sum = yearlySum(monthlySales, size);
	avg = yearlyAvg(sum, size);
	cout << "The total of all your sales is: " << sum << endl;
	cout << "The average of all your sales is: " << avg << endl;


	
	delete [] monthlySales;

	monthlySales = 0;	
}





int yearlySum(int *monthlySales, int size) 
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += monthlySales[i];
	return sum; 
}




int yearlyAvg(int sum, int size)
{
	int avg;
	avg = sum / size;
	return avg;
}
