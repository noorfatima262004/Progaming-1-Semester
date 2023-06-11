#include <iostream>
using namespace std;
void Rotate(int array[], int size, int n, int array1[]);
main()
{
    int n;
    int array[5] = {1, 2, 3, 4, 5};
    int array1[5];
    cout << "Enter the number to break = ";
    cin >> n;
    Rotate(array, 5, n, array1);
    for(int x = 0 ; x < 5 ; x++)
    {
        cout << array1[x];
    }
}
void Rotate(int array[], int size, int n, int array1[])
{
    int num = 0;
    for (int x = 0; x < size; x++)
    {
        if (array[x] == n)
        {
             num = x;
            break;
           
        }
    }
    int x = 0;
    for (int y = num + 1; y < size; y++)
    {
        array1[x] = array[y];
        x++;
    }
    for (int y = 0 ; y <= num ; y++)
    {
        array1[x] = array[y];
        x++;
    }
}
