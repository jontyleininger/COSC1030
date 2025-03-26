//
// Name
// Date
// Grades Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

void calculateGPA(double, int, double&);

int main ()
{
	int n;
	double sum = 0;


	cout << "Enter the number of grades you want to input: " << endl;
	cin >> n;
	
	
	for (int i = 1; i <= n; i++)
	{
		double grade; 

		cout << "Enter grade #" << (i) << ": ";
		cin >> grade;
		sum = sum + grade;
	}


	double GPA = 0;
	calculateGPA (sum, n, GPA);



	if (GPA >= 90)
	{
    	cout<<"Your Grade is A"<< endl;
    	}
   	else if (GPA >= 80)
	{
        cout<<"Your Grade is B"<< endl;
   	}
    	else if (GPA >= 70)
	{
        cout<<"Your Grade is C"<< endl;
   	}
    	else if (GPA >= 60)
	{
        cout<<"Your Grade is D"<< endl;
    	}
    	else if (GPA >= 0)
	{
        cout<<"Your Grade is F"<< endl;
    	}
    	else if (GPA >= 40)
	{
        cout<<"Your Grade is D"<< endl;
    	}
    	else if (GPA >= 30)
	{
        cout<<"Your Grade is E"<< endl;
    	}
    	else if (GPA <= 30)
	{
        cout<<"Your Grade is F"<< endl;
   	}
    

	return 0;
}








void calculateGPA (double sum, int n, double &GPA)
{

	GPA = sum / n;
	



}
