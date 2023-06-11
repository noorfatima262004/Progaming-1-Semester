#include <iostream>
using namespace std;
int samerows();
int matrix[4][3] = {
    {0, 1, 0},
    {0, 1, 0},
    {0, 1, 0},
    {0, 1, 0}};
main()
{
    int n = samerows();
    // cout << n ;
    if (n != 1)
    {
        cout << "Your Identical rows  =  " << n << endl;
    }
    else if (n == 1)
    {
        cout << "Your identical rows are = 0 " << endl;
    }
}
int samerows()
{
    int p = 1;
    for (int r = 0; r < 4; r++)
    {
        for (int x = r + 1; x < 4; x++)
        {
            if (matrix[r][0] == matrix[x][0])
            {
    
                if (matrix[r][1] == matrix[x][1])
                {
                    if (matrix[r][2] == matrix[x][2])
                    {
                        p++;
                        cout << p << endl;
                       break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }

  return p;
}