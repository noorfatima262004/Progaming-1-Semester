#include <iostream>
using namespace std;
void bill(string day, int amount,float discount_S,float discount_A);
main(){
string day;
int amount;
float discount_A,discount_S;
while(true)
{
	cout<< "Enter day:";
	cin>>day;
	cout << "Enter ammount of bill:";
	cin>> amount;
bill(day,amount,discount_S,discount_A);
 }
}
void bill(string day, int amount, float discount_A,float discount_S)
{
discount_S= amount-(amount * 0.1);
discount_A= amount-(amount * 0.05);
	if( day== "sunday")
   {
     cout<< "Your total bill is:" << discount_S << endl;
    }
	if( day != "sunday")
   {
     cout<< "Your total bill is:" << discount_A<< endl;
    }
}