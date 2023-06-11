#include <iostream>
using namespace std;
void maximum(int num1, int num2);
void minimum(int num1, int num2);
void equal(int num1, int num2);
main(){
int num1,num2,choice;
while(true)
{
	cout << "enter first number";
	cin>>num1;
	cout << "enter second number";
	cin>>num2;
	cout<< "enter choice(1-3):";
	cin>> choice;
   if(choice ==1){
  maximum(num1,num2);
   }
  if(choice ==2){
  minimum(num1,num2);
   }
  if(choice ==3){
equal(num1,num2);
   }
 }
}
void maximum(int num1,int num2)
{
	if (num1 < num2){
   cout<< "the NUM2 is GREATER" << endl;
   }
	if(num1 > num2){
   cout <<"the NUM1 is GREATER" << endl;
}

	if(num1 == num2){
   cout <<"the NUMBERS are EQUAL" << endl;
  }
}
void minimum(int num1, int num2)
{
	if (num1 < num2){
   cout<< "the NUM1 is SMALLER " << endl;
   }
	if(num1 > num2){
   cout <<"the NUM2 is SMALLER" << endl;
}
}
void equal(int num1, int num2)
{
	if(num1 == num2){
   cout <<"the NUMBERS are EQUAL" << endl;
  }
	if(num1 != num2){
   cout <<"the NUMBERS are NOT EQUAL" << endl;
  }
}


