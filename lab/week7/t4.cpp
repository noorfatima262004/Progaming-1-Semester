#include <iostream>
using namespace std;
void fun(int count, int num);
main()
{
    int num, count;
    cout << "enter a num=";
    cin >> num;
    fun(count,num);
}
void fun(int count, int num)
{
     count = 0;
    while(num != 0)
    {
        
         num = num/10;
         count++;
    }
    cout << count;
}