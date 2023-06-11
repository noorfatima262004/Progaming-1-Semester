#include <iostream>
using namespace std;

void result (int num);

main()
{
int num;
 cout << "enter your number:";
 cin >> num;
result (num);
}
void result (int num)
{
    if (num  <= 50){
       cout << "FAIL" << endl;
}
    if (num  >= 50){
       cout << "PASS" << endl;
}
}