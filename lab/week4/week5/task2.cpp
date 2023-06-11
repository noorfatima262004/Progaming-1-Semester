#include <iostream>
#include <cmath>
using namespace std;


main()
{
	float num1;
   	float  num2;
	float num3;
	int result,result1,result2,result3,result4,result5;
  
	cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
	cout<< "Enter third number:";
	cin>> num3;
	result = max(num1,num2,num3);
	result1 = pow(num1,num2);
	result2 = cbrt(num1);
	result3 = ceil(num3);
	result4 = floor(num3);
	result5 = min(num1,num2,num3);

	cout << "the greater number is =" << result << endl;
	cout << "the power is=" << result1 << endl;
	cout << " the cube root is= " << result2 << endl;
	cout << " the ceil is= " << result3 << endl;
	cout << "the floor is=" << result4 << endl;
	cout << "the minimum number is =" << result5 << endl;
}