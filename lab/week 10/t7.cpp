#include <iostream>
using namespace std;
int ascendingorder();
int size;
int num[1000];
main()
{
    cout << "Enter the size of array = ";
    cin >> size;
    //int num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the numbers = ";
        cin >> num[i];
    } 
     for(int x =0 ; x < size ; x++)
     {
        int result = ascendingorder();
        // cout <<  result[x] << "  ";
     }

}
int ascendingorder()
{
    for (int x = 0; x < size; x++)
    {
        for (int i = x + 1; i < size; i++)
        {
            if (num[x] > num[i])
            {
                int temporary = num[x];
                num[x] = num[i];
                num[i] = temporary;
            }
        }
    }
    for (int x = 0; x < size; x++)
    {
       cout << num[x] << " ";

    } 
}