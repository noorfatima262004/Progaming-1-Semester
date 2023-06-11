#include <iostream>
using namespace std;
void frequency(int num, int digit);
main()
{
    int num, digit;
    cout <<"Enter a num=";
    cin >> num;
    cout <<"enter a digit=";
    cin >> digit;
    frequency (num ,digit);
   
}
void frequency(int num, int digit)
{
    int count = 1;
    while(num > 0)
    { 
	 num = num/10;
        int num1 = num%10;

     if(num1 == digit)
         count++;
     }
         cout << "frequency=" << count;
}
