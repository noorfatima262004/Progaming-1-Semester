#include <iostream>
using namespace std;
// int grid[3][4] =
//     {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}};
// main()
// {
//     cout << grid[0][3] << endl;
// }
int car[5][5] = {
    {10, 7, 12, 10, 4},
    {18, 11, 15, 17, 2},
    {23, 19, 12, 16, 14},
    {7, 12, 16, 0, 2},
    {3, 5, 6, 2, 1}};
main()
{
    int sum = 0;
    for (int row = 0; row < 5; row++)
    {
        sum = sum + car[row][0];
    }
    cout << sum;
}