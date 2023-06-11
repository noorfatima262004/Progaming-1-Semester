#include <iostream>
using namespace std;
int shape(int triangle);
main()
{
    int triangle, dots;
    cout << "enter the triangle";
    cin >> triangle;
    int result = shape(triangle);
    cout << result;
}
int shape(int triangle)
{
    int i = 0;
    
    for (int x = 1; x <= triangle; x++)
    {
    
            i = i + x;
    }
    return i;
}
