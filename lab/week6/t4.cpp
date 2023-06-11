#include <iostream>
using namespace std;
string fun(int num);
main()
{
	int num;
	string name;
	cout << "Enter a num=";
	cin >> num;
	name = fun(num);
	cout << name;
}
 string fun(int num)
{
	string name;
	int rem = num % 2;
	
	if(rem == 0)
	{
	     name = "Even" ;
	}
	if(rem != 0)
	{
	     name = "Odd";
	}
	return name;
}
		
	
	