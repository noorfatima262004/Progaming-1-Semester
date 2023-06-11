#include <iostream>
using namespace std;
void pass (int num);
void fail (int num);

main(){
int num;
 cout << "enter your number:";
 cin >> num;
 if (num  <= 50){

fail (num);
}
if (num  >= 50){

pass(num);
}
}

void pass (int num){
cout << "PASS" << endl;
}
void fail(int num){
cout << "FAIL" << endl;

}