#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
main()
{
	float num;
	cout<<"num=" << endl;
	cin >> num;
	float result = floor(num);
	float result1 = ceil(num);
	cout<< "the floor is=" << result<< endl;
	cout<< "the ceil is=" << result1;

}