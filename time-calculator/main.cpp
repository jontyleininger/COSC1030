//
// Name Jon Leininger
// Date 2-16-25
// Time Calculator Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;


int main () 
{

long long int seconds;
float secs_in_a_min;
float secs_in_a_hour;
float secs_in_a_day;
secs_in_a_min = 60;
secs_in_a_hour = 3600;
secs_in_a_day = 86400;

	
cout << "Enter a Number of Seconds" << endl;
cin >> seconds;

if (seconds >= 60)
{
	if (seconds >= 3600)
{
		if (seconds >= 86400)
			cout << "That is " << seconds/secs_in_a_day << " days" << endl;
		else 	
{	
			cout << "That is " << seconds/secs_in_a_hour << " hour/s." << endl;
}
			
}

	else		
		cout << "That is " << seconds/secs_in_a_min << " minutes." << endl;
}
else
	cout << "That is " << seconds << " seconds" << endl;

	

	
			
	
	
	
	
	

 






return 0;
}

