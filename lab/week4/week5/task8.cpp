#include <iostream>
#include <cmath>
using namespace std;



main()
{
while(true)
 {
	int hrs, mins,hrs1,min1;
	cout << " Enter hours=";
	cin >> hrs;
	cout << " Enter minutes=";
	cin >> mins;
	cout << hrs << " hours and " << "minutes" << mins << endl;

	if( (mins+15) < 59)
     {
	min1 = mins + 15;
	hrs1 = hrs;
	cout << " THE TIME AFTER 15 MIN IS="<< endl;
	cout << "  " << hrs << ":" << min1 << endl;
    }

	if( (mins+15) >= 60)
    {
	min1 = (mins + 15) - 60;
	hrs1 = hrs + 1;

	if( (hrs + 1) == 24)
    {
	hrs1 = 00;
    }
	cout << " THE TIME AFTER 15 MIN IS="<< endl;
	cout << "  " << hrs1 << ":" << min1;
		
    }
 }
}
	
	