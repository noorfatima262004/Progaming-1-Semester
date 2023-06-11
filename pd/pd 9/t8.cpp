#include <iostream>
using namespace std;
main()
{
    int size;
    int result;
    int count = 0;
    int count1;
    int pencil = 0;
    cout << "Enter the size of array=";
    cin >> size;

    count = size * 2;
    string color[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter the colour=";
        cin >> color[x];
    }
    for (int x = 1; x < size; x++)
    {
        if (color[x - 1] != color[x])
        {
            count++;
    
        }
    }
    cout << "the total time is = " << count;
}