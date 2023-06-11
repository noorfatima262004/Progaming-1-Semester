#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int phrs, pmins, ahrs, amins;
    string ouput;
    cout << "Enter the starting hour of exam=";
    cin >> phrs;
    cout << "Enter the starting minutes of exam=";
    cin >> pmins;
    cout << "Enter the hours of arrival=";
    cin >> ahrs;
    cout << "Enter the minutes of arrival=";
    cin >> amins;
  
    int ptime =(phrs * 60 ) + pmins;
    cout << "paper=" << ptime << endl;
    int atime =(ahrs * 60 ) + amins;
    cout << "arrival" << atime << endl;
 
    if(ptime <= atime)
    {
      cout<< "LATE" << endl;
    }
    else if(ptime == atime || (ptime - atime) <= 30)
    {
      cout <<  "ON TIME";

      int thrs=(ptime - atime)/60;
      cout << thrs<<endl;
     int tmins=(ptime - atime) % 60;
     cout <<tmins<<endl;
     cout << thrs << ":" << tmins << endl;
    }
    else if ((ptime - atime) > 30)
    {
      cout << "EARLY" ;
    int thrs=(ptime - atime)/60;
     cout << thrs<<endl;
    int tmins=(ptime - atime) % 60;
    cout <<tmins<<endl;
    cout << thrs << ":" << tmins << endl;
    }
    
    if((ptime - atime) < 0)
    cout << "AFTER THE START";
    if((ptime - atime) >0)
    cout << "BEFORE THE START";
}
   
   

