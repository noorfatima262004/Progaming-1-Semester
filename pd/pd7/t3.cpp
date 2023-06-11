#include <iostream>
using namespace std;
void amplify(int list);
main()
{
    int list;
    cout << "Enter the list of num=";
    cin >> list;

    amplify( list);
}
void amplify(int list)
{
    for( int x = 1; x <= list ; x++)
    {
        if(x%4 ==0)
        {
          cout << x * 10  << ","; 
        } 
        else 
        {
            cout << x << "," ;
        }
        
    }   
}