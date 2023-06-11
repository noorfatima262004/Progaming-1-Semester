#include <iostream>
using namespace std;
main()
{
    int size;
    int count = 0;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];

    for (int x = 1; x <= size; x++)
    {
        cout << "Enter the num=";
        cin >> num[x];
        count++;
    }
    //   cout << count << endl;

    for (int x = count; x >= 1; x--)
    {
        cout << num[x] << endl;
    }
}