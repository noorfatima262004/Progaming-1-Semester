#include <iostream>
using namespace std;
main()
{
    int rows;
    cout << "Enter the num of rows=";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

}