#include<iostream>
#include<cmath>
using namespace std;

main()
{
	float days, worker,hours,whours,tdays,Ldays,thours;
	

	cout << " how many hours are needed=";
	cin >>hours;
	cout << " Enter the days required=";
	cin >> days;
	cout << " Enter the no. of workers required ";	
	cin >> worker;

	Ldays = (days *10)/100;
	cout<< Ldays << endl;

	tdays = days - Ldays;
	cout<< tdays << endl;

	whours = tdays * 10;
 	thours=worker*whours;
	cout<<thours << endl;
	
	if (hours < thours)
	{
	int ans =  thours - hours ;
	cout << " YES! You have" << ans << " hours";
	}

	if (hours > thours)
	{
	int ans = hours  -  thours;
	cout << " NOT ENOUGH TIME!Hours needed =" << ans  ;
	}
}


	
	

	
	
	