#include<iostream>
using namespace std;
void swap(int &num1 , int &num2);
main()

{
  int num1 = 10 ;
  int num2 = 30;
    // int num = 9;
    // cout << &num << endl;
    // int *p = &num;
    // cout << "p address = " << p << endl;
    // cout << " value of p = " << *p;
    cout << num1  << "\t"<<  num2 << endl;
  swap(num1 , num2);
  cout << num1 << "\t" << num2<< endl;
}
// void changenum(int &num)
// {
//     num = 10;
//     int *p = &num;
//     cout <<p << endl;; 
//     cout << *p ;  
// }
void swap(int &num1 , int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}