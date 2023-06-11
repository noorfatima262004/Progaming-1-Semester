#include <iostream>
using namespace std;
main()
{
    int size;
    int findnum = 0;
    cout << "Enter the size of array=";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter the numbers=";
        cin >> num[x];
    }
    
    for (int x = 0; x < size; x++)
    {
        if (num[x] == 7 || num[x] % 10 == 7)
        {
            findnum = 1;
        }
        if(num[x] != 7)
        {
            findnum = findnum;
        }
    }
    if (findnum == 1)
    cout << "boom";
    else 
    cout <<"There is no 7 in array ";
}