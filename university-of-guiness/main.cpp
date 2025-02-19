//
// Name Jon Leininger
// Date 2-18-25
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main () 
{
string stateStatus;
string roomBoard;
float totalBill;

cout << "Hello, please complete the following prompts to calculate your bill for a semster."
<< endl;

cout << "Please enter if you have a need for room and board. (i.e, Y or N)" << endl;
cin >> roomBoard;

cout << "Please eneter your residential status. (i.e., in-state or out-of-state)" << endl; 
cin >>  stateStatus;

if (stateStatus == "in-state")
{
	if (roomBoard == "Y")
{
		totalBill = totalBill + 2500;
		totalBill = totalBill + 3000;
}
	else 		
		totalBill = 3000;



}
else if (stateStatus == "out-of-state")
{
	if (roomBoard == "Y")
{
		totalBill = totalBill + 3500;
		totalBill = totalBill + 4500;
}
	else 		
		totalBill = 4500;



}

cout << "Your total is $" << totalBill << ", good luck ;)";










return 0;
}
