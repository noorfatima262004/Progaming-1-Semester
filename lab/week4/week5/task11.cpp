#include <iostream>
#include <cmath>
using namespace std;
int multiple(int num);
main()
{  
	int num, result;
	cout << " Enter a number";
	cin >> num;
	
	result = multiple(num);

	return 0; 	
}
 
int multiple(int num)
{
	int total;
	total = num * 5;
	return total;
}
  
 