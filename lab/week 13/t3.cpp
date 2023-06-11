#include <iostream>
using namespace std;

int car[5][5] = {
    {10, 7, 12, 10, 4},
    {18, 11, 15, 17, 2},
    {23, 19, 12, 16, 14},
    {7, 12, 16, 0, 2},
    {3, 5, 6, 2, 1}};
main()
{
    int sum = 0;
    int largest = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            // cout << car[col][row] << "\t";
            // sum = sum + car[row][col];
            if(largest < car[row][col])
            {
                largest = car[row][col];
            }
        }
    }
    cout << largest;
}