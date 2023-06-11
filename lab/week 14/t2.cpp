#include <iostream>
using namespace std;
void pass(int array[][3] , int size);
int main()
{
    // int array[3] = {1,2,3};  
    // pass(array , 3);
    // cout << array[0];
    int array[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10 , 11 , 12}};
    pass(array ,3);
}
void pass(int array[][3] , int size)
{
    // for(int x = 0 ; x < size ; x++)
    // {
    //     array[x] = 7;
    // }
    for(int row = 0 ; row < 4 ; row++)
    {
        for(int col = 0 ; col < size ; col++)
        {
            cout << array[row][col];
            cout << "\t" ;
        }
        cout << endl;
    }
}
