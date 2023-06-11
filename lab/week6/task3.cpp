#include <iostream>
using namespace std;
string speed(float num);
main()
{
    float num;
    cout << "Enter the speed of vechicle=";
    cin >> num;
    string result = speed(num);
    cout << result;
}

string speed(float num)
{
    string result;
    if(num <= 10)
    {
       result = "slow";
    }
     if(num >= 10 && num <= 50)
    {
       result = "AVERAGE";
    }
     if(num >= 50 && num <= 150)
    {
       result = "FAST";
    }
     if(num >= 150 && num <= 1000)
    {
       result = "ULTRA - FAST";
    }
     if(num > 1000)
    {
       result = "EXTREMELY - FAST";
    }
     return result;
}
    

	
		
	
	  

		
	
	