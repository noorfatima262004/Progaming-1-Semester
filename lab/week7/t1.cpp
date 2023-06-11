#include <iostream>
using namespace std;
int output(int sum, int num);
main()
{
    int sum= 0;
    int num;
    cout << "enter a num=";
    cin >> num;
    int result = output(sum, num);
}

int output(int sum, int num)
{
    for(int x =1; x <= num ; x++)
    {
        sum = x + sum;
        
    }
cout <<   "SUM IS =" << sum << endl;
}
