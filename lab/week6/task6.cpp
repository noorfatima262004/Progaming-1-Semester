#include <iostream>
using namespace std;
float lowprice(string time, float km);
main()
{
	string time;
	float km;
	cout << "How many killometers you want to travel=";
	cin >> km;
	cout << "The time of day=";
	cin>> time;
	float result = lowprice(time, km);
	cout <<"the pricerate is="<< result;
}
float lowprice(string time, float km)
{
	float result,taxiD,taxiN,bus,train;

	if(km < 20)
	{
			if(time == "day")
	{
		float taxiD=(km * 0.79 + 0.70);
		if (taxiD < bus && taxiD < train);
	{
		result = taxiD;
	}
	}
		if(time == "night")
	{
		float taxiN=(km * 0.90 + 0.70);
		if (taxiN < bus && taxiN < train);
	{
		 result = taxiN;
	}
	}
	}
	if(km >= 20)
	{
		float bus=(km *0.09);
	 if (bus < taxiD && bus < taxiN && bus < train);
	{
		result = bus;
	}
	}
	if(km >= 100)
	{
		float train=(km *0.06);
	 if (train < taxiD && train < taxiN && train < bus);
	{
		result = train;
	}
	}
	return result;
}
	
	

		
	
	