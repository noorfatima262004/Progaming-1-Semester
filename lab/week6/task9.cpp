#include <iostream>
#include <cmath>
using namespace std;
float output(float hol, float home,string year);
main()
{
    string year;
    float hol, home;
    cout << "Enter the year=";
    cin >> year;
    cout << "Enter the no. of holidays=";
    cin >> hol;
    cout << "Enter the no. of weekened he went to his hometown=";
    cin>> home;
    float result = output(hol , home, year);
    result = floor(result);
    cout <<" HE PLAY VOLLEYBALL ="<< result << "TIMES";
}
float output(float hol, float home,string year)
{
    float result;
    float sat = 48 - home;
    if(year == "normal")
    {
        result = (sat *3)/4 + (hol * 2)/3 + (home * 3)/4;
    
    }
     if(year == "leap")
    {
       result = (sat * 3)/4 + (hol * 2)/3 + (home * 3)/4 + ((sat * 3)/4 + (hol * 2)/3 + (home * 3)/4) * 0.15;    
    }
    return result;
}


	
	  

		
	
	