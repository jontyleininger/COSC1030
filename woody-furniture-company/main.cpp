//
// Jon Leininger
// 2-10-25
// Woody Furniture Company Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	const double americanC = 85.00;
	const double modern = 57.50;
	const double frenchC = 127.75;
	
	double americanCsales;
	double modernSales;
	double frenchCsales;
	double totalAmericanC;
	double totalmodern;
	double totalFrenchC;
	double total;
	
	cout << "Please input the number of each style sold" << endl;
	
	cout << "Number of American Colonial style sold?" << endl;
	cin >> americanCsales;
	
	cout<< "Number of Modern style sold?" << endl;
	cin >> modernSales;
	
	cout << "Number of French Classical style sold?" << endl;
	cin >> frenchCsales;

	totalAmericanC = ( americanCsales * americanC);
	totalmodern = ( modernSales * modern);
	totalFrenchC = ( frenchCsales * frenchC);

	total = (totalAmericanC + totalmodern + totalFrenchC );
	
	cout << "The total sales from the American colonial style is $" << setprecision(2) << 		fixed << totalAmericanC << endl;
	
	cout << "The total sales from the Modern style is $" << setprecision(2) << fixed << 		totalmodern << endl;

	cout << "The total sales from the French Classical style is $" << setprecision(2) << 		fixed << totalFrenchC << endl;
	
	cout << "The total sales from the all styles are $" << setprecision(2) << 			fixed << total << endl;



	return 0;
}



