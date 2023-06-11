#include <iostream>
using namespace std;
void checkIfEven(int num);
main(){
int num;
cout << "enter a number:";
cin>>num;
checkIfEven(num);
}

void checkIfEven(int num){
if (num%2 ==0){
cout<< "EVEN" << endl;
}
if(num%2 != 0){
cout <<"ODD" << endl;
}
}