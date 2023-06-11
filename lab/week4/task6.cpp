#include <iostream>
using namespace std;
void eligible(int age);
main()
{
int age;
while(true)
{
cout << "enter your age:";
cin>> age;
eligible (age);
 }
}
void eligible(int age)
{
    if ( age >= 18){
    cout << " you are eligible to vote" << endl;
}
   if ( age < 18) {
 cout <<" your are not eligible to vote"<< endl;
}
}