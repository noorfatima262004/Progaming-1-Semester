#include <iostream>
using namespace std;

main()
{
    int matrix1[3][3], matrix2[3][3], matrix3[3][3] = {0}, row, col, k;

    // Matrix 1

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << "Matrix 1 [" << row << "][" << col << "] ";
            cin >> matrix1[row][col];
        }
    }
    cout << "Matrix 1 is " << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << matrix1[row][col] << " ";
        }
        cout << endl;
    }

    // Matrix 2

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << "Matrix 2  [" << row << "][" << col << "] ";
            cin >> matrix2[row][col];
        }
    }
    cout << "Matrix 2 is " << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << matrix2[row][col] << " ";
        }
        cout << endl;
    }

    // matrix 3

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            for (k = 0; k < 3; k++)
            {
                matrix3[row][col] = matrix3[row][col] + (matrix1[row][k] * matrix2[k][col]);
            }
        }
    }

    cout << " Multiplication is :" << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << matrix3[row][col] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix3[i][j]= matrix1[i][j] + matrix2[i][j];
            cout << matrix3[i][j]<<"\t";
        }
        cout << endl;
    }
    int temp = matrix1[0][0], count=0;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i == j && matrix1[i][j] == temp)
           {
               count++;
           }
        }
    }
    if(count==3)
    {
        cout << "Is diaonal"<< endl;
    }
    else
    {
        cout << "not diagonal"<< endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix3[i][j]= matrix1[j][i];
            cout << matrix3[i][j]<<"\t";
        }
        cout << endl;
    }

}