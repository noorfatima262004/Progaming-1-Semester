#include <iostream>
using namespace std;
void triangle(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    triangle(rows);
}
void triangle(int rows)
{
    for (int row1 = rows; row1 >= 1; row1--)
    {
        for (int column = row1; column <= rows; column++)
        {
            cout << "*";
        }
        for (int space = row1; space >= 2; space--)
        {
            cout << " ";
        }
        for (int column = row1; column >= 2; column--)
        {
            cout << " ";
        }
        for (int space = row1; space <= rows; space++)
        {
            cout << "*";
        }
        cout << endl;
    }
}