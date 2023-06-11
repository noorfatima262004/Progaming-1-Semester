#include <iostream>
using namespace std;
int maxinum(int num, int num1 , int num2);
main()
{
	int num, num1, num2;
	cout << " Enter a num:";
	cin >> num;
	cout << " Enter a num:";
	cin >> num1;
	cout << " Enter a num:";
	cin >> num2;
	int result = maxinum(num, num1 , num2);
	cout << result;
	
}
 
int maxinum(int num, int num1 , int num2)
{
	int greatest;

 		if(num > num1 && num > num2 )
        {
	        greatest = num ;
	    }
		if(num1 > num2 && num1 > num )
	   {
		greatest = num1 ;
	   } 
		if(num2 > num1 && num2 > num )
	   {
		greatest = num2;
	   } 
      
	return greatest;
}