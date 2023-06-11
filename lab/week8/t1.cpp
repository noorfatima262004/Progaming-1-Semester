#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the size of array=";
    cin >> size;

    int num[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter the num=";
        cin >> num[x];
    }

    for (int x = 0; x < size; x++)
    {
        cout << "The value of  " << x + 1 << "  number is =" ;
        cout << num[x] << endl;
    }
}