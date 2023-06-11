#include <iostream>
#include <cmath>
using namespace std;

int number(int num, int rem,  int num1);
main()
{
while(true)
{
	int num, rem, num1;
	cout << "Enter a num(except 11-19)=" << endl;
	cin>> num;
	
	rem=num%10;
	num1=num/10;
	
 	cout << num1 << endl;
  	cout << rem << endl;
number(num,rem,num1);
}
}

int number(int num, int rem, int num1)
{

	if( num1 == 1)
{
	cout << "ten";
}
	if( num1 == 6)
{
	cout << "sixty";
}
	if( num1 == 7)
{
	cout << "seventy";
}
	if( num1 == 8)
{
	cout << "eighty";
}
	if( num1 == 9)
{
	cout << "ninty";
}
	if( num1 == 5)
{
	cout << "fifty" ;
}
	if( num1 == 4)
{
	cout << "forty" ;
}
	if( num1 == 3)
{
	cout << "Thirty" ;
}
	if( num1 == 2)
{
	cout << "Twenty";
}
	if( rem == 1)
{
	cout << " one"<< endl;
}
       if( rem == 2)
{
	cout << " two"<< endl;
}
       if( rem == 3)
{
	cout << " three"<< endl;
}
       if( rem == 4)
{
	cout << " four"<< endl;
}
       if( rem == 5)
{
	cout << " five"<< endl;
}
       if( rem == 6)
{
	cout << " six"<< endl;
}
       if( rem == 7)
{
	cout << " seven"<< endl;
}
   if( rem == 8)
{
	cout << " eight"<< endl;
}
   if( rem == 9)
{
	cout << " nine"<< endl;
}
}
       