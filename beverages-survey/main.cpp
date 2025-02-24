//
// Name Jon Leiniger 
// Date 2-22-2025
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
 	cout << "Please have each person enter the number of their favorite beverage" << endl
	<< "To end the program enter n1" << endl
	<< "The choices are:" << endl 
	<< "1. Coffee" << endl
	<< "2. Tea" << endl
	<< "3. Coke" << endl
	<< "4. Orange Juice" << endl;
 	
	string choice;
	cin >> choice; 

	int ojtotal = 0;
	int coffeetotal = 0;
	int teatotal = 0;
	int coketotal =0;
	
	
	

	

		
	while (choice != "n1") 
	{	
		if (choice == "1")
			{
			coffeetotal++;
			cin >> choice;
			}
		else if (choice == "2")
			{
			teatotal++;
			cin >> choice;
			}
		else if (choice == "3") 
			{
			coketotal++;
			cin >> choice;
			}
		else if ( choice == "4")
			{
			ojtotal++;
			cin >> choice;
			}
		
	}
		cout << "The total tally for coffee is " << coffeetotal << endl;
		cout << "The total tally for tea is " << teatotal << endl;
		cout << "The total tally for coke is " << coketotal << endl;
		cout << "The total tally for orange juice is " << ojtotal << endl;
		




return 0;
}
