#include <iostream>
#include <cmath>
float height(float num1 , float num2);
using namespace std;

main()
{
	float num1;
   	float  num2;
	float high;
	cout << "enter base="  << endl;
	cin >>num1;
	cout << "enter angle=" << endl;
	cin >> num2 ;
	high = height(num1, num2);
	cout << " the height is=" << high<<endl;
}
float height(float num1 , float num2)
{
	 
	 float radian = num2/57.2958;
	 float result = tan(radian);
	 float high = result * num1;
	 return high;
}