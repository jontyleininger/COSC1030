//
// Jon Leininger
// 3-6-2025
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
	double pennies;
	double nickels;
	double dimes;
	double quarters;
	

	cout << "Please enter the amoint of coins needed to make 1 dollar" << endl; 
	cout << "Please enter the amount of pennies" << endl;
	cin >> pennies;
	cout << "Please enter the amount of nickels" << endl;
	cin >> nickels;
	cout  << "Please enter the amount of dimes" << endl;
	cin >> dimes;
	cout << "Please enter the amount of quarters" << endl;
	cin >> quarters;
	
	
	const double pennies_value = pennies * 1;
	const double dimes_value = dimes * 10;
	const double nickels_value = nickels *5;
	const double quarters_value = quarters * 25; 



	double total = dimes_value + pennies_value + quarters_value + nickels_value; 
 

	if (total == 100)
		cout << "congratulations! that is a dollar.";
		
	else;
		if (total < 100)
				cout << "not quite, that is less than a dollar.";
		if (total > 100)
				cout << "woah, that is more than a dollar. Try again"; 
			
	
	
	



return 0;
}

