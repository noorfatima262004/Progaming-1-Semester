#include <iostream>
using namespace std;
int Area(int size);
int numbers[100];
int area = 0;
main()
{
    int size;
    
   // int sum =0;
    cout << "Enter the size of array = ";
    cin >> size;
    
    for(int x =0; x < size; x++)
    {
        cout << "Enter the numbers = ";
        cin >> numbers[x]; 
    }
   cout << Area(size);
}
int Area(int size)
{
        for( int x = 0 ; x < size ; x=x+3)
        {
            area = area + (numbers[x]*numbers[x+1]*numbers[x+2]);
        }

  return area ;
}