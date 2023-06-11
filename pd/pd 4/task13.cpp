#include <iostream>
using namespace std;
main(){
int wdays, holidays, gametime, diffinmin,diffinmin1;
int hrs, min;
	cout << "Enter holiday=";
	cin>> holidays;

  wdays=365-holidays;
  gametime= wdays* 63 + holidays * 127;
  diffinmin=(30000- gametime);
  diffinmin1=(gametime - 30000);
 

	if(gametime<30000)
  {
	hrs=diffinmin/60;
	min=diffinmin%60;
	cout << " tom sleeps well."<< endl;
	cout<< "He can sleep=" << diffinmin << " minutes per year." << endl;
	cout<< "He can sleep=" << hrs << " hours and minutes = " << min;
  }
	if(gametime>=30000)
  {
	hrs=diffinmin1/60;
	min=diffinmin1%60;
	cout << " Tom will run away." << endl;
	cout << "He can sleep=" << diffinmin1 << " minuter per year." << endl;
	cout<< "He can sleep=" << hrs << " hours and minutes = " << min;
  }
}




