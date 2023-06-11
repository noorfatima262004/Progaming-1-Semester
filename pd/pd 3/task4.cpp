#include <iostream>
using namespace std;
main(){
string name;
int sub1, sub2, sub3, sub4, sub5;
float percentage,result;
cout << " enter your name:";
cin>> name;
cout << "enter 1 subject marks:";
cin >> sub1;
cout << "enter 2 subject marks:";
cin >> sub2;
cout << "enter 3 subject marks:";
cin>> sub3;
cout << "enter 4 subject marks:";
cin>> sub4;
cout << "enter 5 subject marks:";
cin>> sub5;
result= (sub1+sub2+sub3+sub4+sub5);
percentage= (result/500) * 100;
cout <<"your percentage is:"<< percentage;
}
