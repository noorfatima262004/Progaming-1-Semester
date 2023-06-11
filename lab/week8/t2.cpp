#include <iostream>
using namespace std;
main()
{
    int size;
    int sum =0;
    int average;
    cout << "enter the size=";
    cin >> size;
    int num[size];
    for(int x = 0; x < size ; x++)
    {
        cout << "Enter the num=";
        cin >> num[x];
    }
    for(int x = 0; x < size ; x++)
    {
         sum = sum + num[x];
    }
     cout << "the sum is= " << sum << endl;
    for(int x = 0; x < size ; x++)
    {
       average = sum/size;
    }
    cout << "the average is =" << average << endl;
}