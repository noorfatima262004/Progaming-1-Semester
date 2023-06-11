#include <iostream>
#include <cmath>
using namespace std;
string compare(int num);

main()
{
      int num;
      int add;
	
	cout << " Enter a five digit num";
	cin >> num;
	 compare(num);
}

string compare(int num)
{
int num1,num2,num3,num4,num5,rem1,rem2,rem3,rem4,rem5;
 
 
	rem1= num%10;
	num1= num/10;
	rem2= num1%10;
	num2= num1/10;
	rem3= num2%10;
	num3= num2/10;
	rem4= num3%10;
	num4= num3/10;
	rem5= num4%10;
	num5= num4/10;
 
 int add = rem1 + rem2 + rem3 + rem4 + rem5;
	if( add%2 ==0)
{
 cout << " EVENISH" << endl;
}
if( add%2 == 1)
{
 cout << "ODDISH" << endl;
}

}
	
 