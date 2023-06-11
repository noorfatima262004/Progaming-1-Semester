#include <iostream>
#include <cmath>
using namespace std;


main()
{
	float numa = 5;
	float numb = 6;
	float numc = 1;
	float result, result1;
   
        result = pow(numb, 2);
	result = result - (4 * numa * numc);
	result = sqrt(result) ;
	result = -numb + result;
	result = result / (2 * numa);
	cout << "first value of x is=" << result << endl; 
	
        result1 = pow(numb, 2);
	result1 = result1 - (4 * numa * numc);
	result1 = sqrt(result1) ;
	result1 = -numb - result1;
	result1 = result1 / (2 * numa);
	cout << "second value of x is=" << result1 << endl; 

	
}
