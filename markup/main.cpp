//
// Name Jon Leininger
// Date 3-25-25
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);






int main ()
{ 
	double wholesale;
	double markupPct;
	double retail;
	
	cout << "Enter the items whoelsale cost: ";
	cin >> wholesale; 

	cout << "Enter the items markup percentage: ";
	cin >> markupPct;
	
	retail = calculateRetail (wholesale, markupPct);

	cout << "The retail price is $" << setprecision(2) << fixed << retail << endl;
	
	return 0;


}












double calculateRetail (double wholesale, double markupPct)
{
 
	double markup = wholesale * markupPct / 100;
	return wholesale + markup;
}