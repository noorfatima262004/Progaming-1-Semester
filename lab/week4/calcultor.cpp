#include <iostream>
using namespace std;

void add(int num1,int num2);
void sub(int num1,int num2);
void divi(int num1,int num2);
void mul(int num1,int num2);

main()
{
while(true)
{

   int num1;
   int num2;
  char symbol;
	cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
	cout<< "Enter the symbol u want to perform(+,-,*,/):";
	cin>>symbol;
	if(symbol=='+')
  {
	add(num1, num2);
  } 
	if(symbol=='-')
  {
	sub(num1, num2);
  }
	if(symbol=='/')
  {
	divi(num1, num2);
  }
	if(symbol=='*')
  {
	mul(num1, num2);
  }
 }
}
void add(int num1,int num2)
{
	int add=num1+num2;
   cout<< "your SUM is:" << add << endl;
}
void sub(int num1,int num2)
{
	int sub=num1-num2;
   cout<< "your SUBTRACTION is:" << sub << endl;
}
void divi(int num1,int num2)
{
	float divide=num1/num2;
  cout<< "your DIVISION is:" << divide << endl;
}
void mul(int num1,int num2)
{
	int multiply=num1*num2;
  cout<< "your MULTIPLICATION is:" << multiply << endl;
}





