#include <iostream>
using namespace std;
main()
{
    int size;
    int largest = 0;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter a num=";
        cin >> num[x];
        if (num[x] > largest)
        
            largest = num[x];

    }
    cout << largest;
}