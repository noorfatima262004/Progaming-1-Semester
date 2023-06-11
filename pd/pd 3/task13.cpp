#include <iostream>
using namespace std;
main(){
int date, birthmonth, birthyear, year, month, currentmonth, currentyear;
	cout << " your date of birth:";
	cin >> date;
	cout << " your month of year:";
	cin>> birthmonth;
	cout << " your birth year:";
	cin >> birthyear;
	cout<< "enter current month:";
	cin>> currentmonth;
	cout<< "enter current year:";
	cin>> currentyear;
	month=currentmonth-birthmonth;
	year=currentyear-birthyear;
	
	cout << "your age is" << year << " and month" << month;

	if( currentmonth > birthmonth)
      {
	month=birthmonth-currentmonth;
	cout << "your age is" << year << " and month" << month;
      }

}