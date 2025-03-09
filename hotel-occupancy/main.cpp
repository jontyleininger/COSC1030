//
// Jon Leininger
// 03-6-2025
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
 	int floors;
	int rooms_total = 0;
	int occupied_total = 0;

	cout << "How many floors in the hotel? " << endl;
	cin >> floors;

	while (floors < 1)
		{
		cout << "ERROR Please enter a number above 0 " << endl;
		cin >> floors;
		}
	
	for (int x = 1; x <= floors; x++)
		{
		int rooms;
		int occupancy;
		
		if ( x == 13) 	
			continue;	
		
		cout << "Enter the number of rooms on floor " << x << endl;
		cin >> rooms;
		while (rooms < 10)
			{
			cout << "ERROR Please enter a number above 9" << endl;
			cin >> rooms;
			}


		cout << "Enter the number of occupied rooms on the floor " << x << 			endl;	
		cin >> occupancy;
		
		
			rooms_total += rooms;
			occupied_total += occupancy;
			
		}
	
	double occupancy_rate = rooms_total / occupied_total * 100;
	
	cout << "\nHotel Occupancy Report:\n";
	cout << "Total number of rooms: " << rooms_total << endl;
	cout << "Number of occupied rooms: " << occupied_total << endl;
    	cout << fixed << setprecision(2);
	cout << "Occupancy rate: " << occupancy_rate << "%" << endl;

	
		







return 0;
}
