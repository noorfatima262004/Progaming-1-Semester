#include <iostream>
#include <cmath>
using namespace std;


main()
{   
	int volume;
	int flow1 ; 
	int flow2 ;
	float tflow,tflow1,tflow2;
	int pipe1,pipe2;
	float worker;
	int overflow;


	cout << " the volume of the pool in liters is =";
	cin >> volume;
	cout << " the flow rate of the first pipe per hour=";
	cin >> flow1;
	cout << " the flow rate of second pipe per hour=";
	cin >> flow2;
	cout << " the hours that the worker is absent=";
	cin >> worker;


  tflow = (flow1 * worker) + (flow2 * worker);
  tflow1 = tflow/1000;
  tflow2 = tflow1 * 100;
  pipe1 = ((flow1 * 3)/tflow) * 100;
  pipe2 = ((flow2 * 3)/tflow) * 100;


	if( tflow < volume)
    {
	cout << " the percentage of pipe is ="<< tflow2 << endl;
	cout << " the contribution of first pipe=" << pipe1 << endl;
	cout << " the contribution of second pipe="<< pipe2 << endl;
   }

  tflow = (flow1 * worker) + (flow2 * worker);
  tflow1 = tflow/1000;
  tflow2 = tflow1 * 100;
  overflow = tflow - volume;

	if( tflow > volume)
   {

	cout << " for = " << worker << "hours";
	cout << " the pool overflow with = " << overflow << " liters " << endl;
    }


}
  
 