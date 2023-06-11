#include <iostream>
using namespace std;
void airline(string name, float price);
main(){
string name;
float price;
while(true)
{
cout << "Enter country name(PAK, IRELAND, INDIA, ENGLAND, CANDA)=";
cin>> name;
cout<< "Enter price in dollars:";
cin>>price;
airline( name, price );
}
}
void airline(string name, float price )
{
float discount1=price-(price * 0.05);
float discount2=price -(price * 0.1);
float discount3=price-(price * 0.2);
float discount4=price-(price * 0.3);
float discount5=price-(price * 0.45);
	if( name == "pakistan")
    {
	cout<< "DISCOUNT=" << discount1 << endl;
   }
       if( name == "Ireland")
    {
	cout << "DISCOUNT=" << discount2 << endl;
   }
	if( name == "india")
    {
	cout << "DISCOUNT=" << discount3 << endl;
   }
	if( name == "england")
    {
	cout <<"DISCOUNT=" << discount4 << endl;
   }
	if( name == "canada")
    {
	cout << "DISCOUNT=" << discount5 << endl;
   }
}

