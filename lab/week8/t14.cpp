#include <iostream>
using namespace std;
main()
{
    int size;
    int num2;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];
    for(int x =0 ; x < size ; x++)
    {
        cout << "Enter any num=";
        cin >> num[x];
    }
    cout << "Enter any number for the product=";
    cin >> num2;
    for(int x =0 ; x < size ; x++)
    {
        int product = num2 * num[x];
        cout << num2 << " * " << num[x] <<  "  =  " << product << endl;
    }
}