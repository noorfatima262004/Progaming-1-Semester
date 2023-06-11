#include <iostream>
using namespace std;
void add (int num1, int num2);
void sub (int num1, int num2);
void multiply (int num1, int num2);

main()
{
int num1,num2;
char symbol;
while (true){
cout << "enter first num:";
cin >> num1;
cout << "enter second num:";
cin>> num2;
cout << "enter operation symbol(+,-.*):";
cin>> symbol;
if(symbol== '+'){
add (num1,num2);
}
if(symbol== '*'){
multiply (num1,num2);
}
if(symbol== '-'){
sub(num1,num2);
}
}
}
void add (int num1, int num2){
int sum= num1+num2;
cout << "the sum is:" << sum << endl;
}
void sub (int num1, int num2){
int sub= num1-num2;
cout << "the subtraction is:" << sub << endl;
}
void multiply (int num1, int num2){
int multiply= num1*num2;
cout << "the multiplication is:" << multiply << endl;

}
