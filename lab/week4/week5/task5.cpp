   #include <iostream>
#include <cmath>
using namespace std;
bool symmetrical(int num);


main()
{
	int num;
	
	int num1,num2,num3,num4,rem1,rem2,rem3,rem4;
	
	cout << " enter symmetrical or non-symmetrical number=";
	cin >> num;
	 symmetrical(num);
	
		
}

bool symmetrical(int num)
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
 
cout << "rem1=" << rem1 << endl;
cout << "rem2=" << rem2 << endl;
cout << "rem3=" << rem3 << endl;
cout << "rem4=" << rem4 << endl;



	if( rem1 == rem5 )
  {
	cout << " the num are symmetrical" << endl;
   } 
	if( rem2 == rem4 )
  {
	cout << " the num are symmetrical" << endl;
   } 
	if( rem1 != rem5 )
  {
	cout << " the num are NOT symmetrical" << endl;
   } 
	if( rem2 != rem4 )
  {
	cout << " the num are NOT symmetrical" << endl;
   } 
}
	
	
	
	