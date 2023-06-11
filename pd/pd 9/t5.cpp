#include <iostream>
using namespace std;
main()
{
    int size;
    bool isequal = false;
    cout << "Enter the size of array that must be 4=";
    cin >> size;
    string name[size];
    for(int x =0; x < size; x++)
    {
        cout << "Enter the variables=";
        cin >> name[x];
        if((name[0] == name[1]) && (name[0]== name[2]) && (name[0]==name[3]))
        {
            isequal = true;
        }
    }
    if(isequal == true)
    {
        cout << "TRUE";
    }
    else
    cout << "FALSE";
}