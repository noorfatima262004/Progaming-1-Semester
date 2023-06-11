#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int num1;
   	int num2;
	int result;
  
	cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
	result = add(num1,num2);
	cout<< "your SUM is:" << result<< endl;
}
