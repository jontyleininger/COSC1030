//
// Jon Leininger
// 5-26-25
// Dental Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

double calculateBill(double, double, double); 
double calculateBill(double, double); 
	
int main() 
{
   	bool isMember;
   	double serviceCharge;
	double testFees;
	double medicineCharges;
	double totalBill;

 
	cout << "Are you a member of the dental plan? (1 for Yes, 0 for No): ";
   	cin >> isMember;

    
	cout << "Enter the service charge: $";
    	cin >> serviceCharge;
    	cout << "Enter the test fees: $";
    	cin >> testFees;

    
	if (isMember)
	{
        	totalBill = calculateBill(serviceCharge, testFees);
	} 
	else 
	{
        	cout << "Enter the medicine charges: $";
        	cin >> medicineCharges;
        	totalBill = calculateBill(serviceCharge, testFees, medicineCharges);
	}

   
    cout << "The total bill is: $" << totalBill << endl;

    return 0;
}


double calculateBill(double serviceCharge, double testFees) 
{
	return serviceCharge + testFees;
}

double calculateBill(double serviceCharge, double testFees, double medicineCharges)
{
    return serviceCharge + testFees + medicineCharges;
}