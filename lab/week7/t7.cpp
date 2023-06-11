#include <iostream>
using namespace std;
main(){
int num, rem, num1, sum;

sum =0;
	cout << "enter number:";
	cin >>num;

	 rem = num%10;
	  
         sum = sum+rem;

    while(num > 0)
    {
    num = num/10;
    rem = num%10; 
    sum = sum + rem;
   }
       cout << "t.rem is :" << sum ;
}