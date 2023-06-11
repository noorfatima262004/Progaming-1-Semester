#include<iostream>
using namespace std;

main()
{
	

	int days, worker,hours,Day, extra , wdays, total;


	cout << " Enter the days required=";
	cin >> days;
	cout << " how many hours are needed=";
	cin >>hours;
	cout << " Enter the no. of workers required ";	
	cin >> worker;
	hours = days * 8;
	days = days * 8;
	wdays = days * 10/100;
	total = days - wdays;
	extra = worker * 2;
	hours = hours + extra;
	
	if (hours > total)
	{
	int ans = hours+total;
	cout << " YES! You have" << ans << "  hours";
	}

	if (hours < total)
	{
	int ans = hours+total;
	cout << " NOT ENOUGH TIME!Hours needed =" << ans  ;
	}
}

