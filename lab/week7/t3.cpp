#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "Enter a num=";
    cin >> num;
    while(num != 15)
    {
        cout << "INVALID" << endl;
        cout << "Enter a num=";
        cin >> num;
    }
}