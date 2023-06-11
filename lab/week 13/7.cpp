#include <iostream>
using namespace std;
void function(int row, int colnum);
string array[4][4] = {{".", ".", ".", "*"}, {".", "*", ".", "*"}, {".", ".", ".", "."}, {".", "*", ".", "."}};
main()
{
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            cout << array[x][y] << "\t";
        }
        cout << endl;
    }
    string input;
    int row;
    cout << "Enter the Address = ";
    cin >> input;
    char input1 = input[0];
    char input2 = input[1];
    if (input1 == 'A')
    {
        row = 0;
    }
    if (input1 == 'B')
    {
        row = 1;
    }
    if (input1 == 'C')
    {
        row = 2;
    }
    if (input1 == 'D')
    {
        row = 3;
    }
    int colnum = input2 - '0';
    colnum = colnum -1;
    function(row, colnum);
}
void function(int row, int colnum)
{
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (x == row && y == colnum)
            {
                if (array[x][y] == ".")
                {
                    cout << "SPLASH" << endl;
                }
                if (array[x][y] == "*")
                {
                    cout << "BOOM" << endl;
                }
            }
        }
    }
}