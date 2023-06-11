#include <iostream>
using namespace std;

main()
{
    int count = 0;
    int check = 0;
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };

    for (int x = 0, y = 0; x < 3; x++, y++)
    {
        if (matrix[x][y] == 1)
        {
            count++;
        }
    }
    if (count == 3)
    {
        check++;
    }
    count = 0;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (x != y)
            {
                if (matrix[x][y] == 0)
                {
                    count++;
                }
            }
        }
    }
    if (count == 6)
    {
        check++;
    }
    if (check == 2)
    {
        cout << " It Is Diagnol Matrix: ";
    }
    else if (check != 2)
    {
        cout << " It Is not a Diagnol Matrix: ";
    }
}