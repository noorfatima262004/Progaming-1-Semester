#include <iostream>
using namespace std;
void upper(int rows);
void lower(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    upper(rows);
    lower(rows);
}
void upper(int rows)
{
    for (int x = 1; x <= rows; x++)
    {
        for (int y = rows; y >= x; y--)
        {
            cout << " ";
        }
        for (int z = 1; z <= x; z++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lower(int rows)
{
    for (int x = 1; x <= rows; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << " ";
        }
        for (int z = rows; z >= x; z--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
