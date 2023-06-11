#include <iostream>
using namespace std;
void checkeven(int num);
main(){
int num;
while(true)
{
	cout << "enter a number";
	cin>>num;
checkeven(num);
}
 }
void checkeven(int num)
{
	if (num%2 ==0){
   cout<< "EVEN" << endl;
   }
	if(num%2 != 0){
   cout <<"ODD" << endl;
  }
}
