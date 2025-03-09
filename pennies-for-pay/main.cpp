//
// Jon Leininger
// 2-6-2025
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	
	int days;
	double pay; 
	
	cout << "How many days? " << endl;
	cin >> days;
	
	
	if (days < 1)
	{
	cout << "Please enter at least 1 for days." << endl;
	cin >> days;
	}


	for (int i = 0; i < days; ++i)
		pay +=./ pow(2,i);
		
	cout << "The total pay after " << days << " days: $" << fixed << setprecision(2) << pay /100.0 << endl;



	

		
	
		
		











return 0;
}


