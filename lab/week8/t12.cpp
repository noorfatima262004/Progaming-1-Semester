#include <iostream>
using namespace std;
main()
{
    int size;
    int smallest = 0;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter a num=";
        cin >> num[x];
    }
    smallest = num[0];
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << smallest;
}