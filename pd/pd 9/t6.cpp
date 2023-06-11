#include <iostream>
using namespace std;
main()
{
    int size;
    int trans;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter the numbers=";
        cin >> num[x];
    }
    cout << "number of transformation=";
    cin >> trans;

    while (trans != 0)
    {
        for (int x = 0; x < size; x++)
        {
            if (num[x] % 2 == 0 )
            {

                num[x] = ( num[x] -2);
            }
            else

                num[x] = (2 + num[x]);
        }
        trans--;
    }
    for (int x = 0; x < size; x++)
    {

        cout << num[x] << " ";
    }
}