#include <iostream>
using namespace std;
bool equalnum(int num1,int num2,int num3);
main()
{
	int num1, num2,num3;
	cout << "Enter first number=";
	cin>> num1;
	cout << "Enter first number=";
	cin>> num2;
	cout << "Enter first number=";
	cin>> num3;
	int result = equalnum( num1, num2,num3);
	if(result == 1)
	{
	cout << "YES";
	}
	if(result == 0)
	{
	cout << "NO";
	}
	
}

bool equalnum(int num1,int num2,int num3)
{
	float result;
   	 
	if(num1 == num2 && num2 == num3)
	{
       	return true;
	}
	else
        {
	return false;
        }
     

    
}


	
	 