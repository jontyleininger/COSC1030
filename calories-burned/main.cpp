//
// Name Jon Leininger
// Date 2-22-2025
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
	const double cals = 3.9; 
	double burnedCals;
	int minutes;
	
	for (minutes = 5; minutes <= 30; minutes += 5)
	{
		burnedCals = minutes * cals;
		cout << "You burned " << burnedCals << " calories in " << minutes << 
		" minutes." << endl;
	}
return 0;













}