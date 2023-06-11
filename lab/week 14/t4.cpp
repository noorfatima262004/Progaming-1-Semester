#include <iostream>
using namespace std;
void merge(int array1[][2], int array2[][2], int array3[][4], int size);
main()
{
    int array1[2][2] = {{1, 2}, {4, 5}};
    int array2[2][2] = {{10, 11}, {14, 15}};
    int array3[2][2 + 2];
    merge(array1, array2, array3, 2);
     for (int z = 0; z < 2; z++)
    {
        for (int x = 0; x < 4 ; x++)

        {
            cout << array3[z][x] << "\t" ;
            
        }
        cout << endl;  
    }
}
void merge(int array1[][2], int array2[][2], int array3[][4], int size)
{
    for (int z = 0; z < 2; z++)
    {
        for (int x = 0; x < size; x++)

        {
            array3[z][x] = array1[z][x];
            array3[z][x+2] = array2[z][x];
        }
    }
}