#include <iostream>
using namespace std;
int returnindex(string color);
// red ,black , brown , blue , grey.
int car[5][5] = {
    {10, 7, 12, 10, 4},
    {18, 11, 15, 17, 2},
    {23, 19, 12, 16, 14},
    {7, 12, 16, 0, 2},
    {3, 5, 6, 2, 1}};
main()
{
    string color;
    cout << "Enter the Colour = " ;
    cin >> color;
    int result = returnindex(color);
    cout << result;

}
int sum(int index)
{
    int sum = 0;
    if(index == 0)
    {
        for(int x = 0; x < 5 ; x++)
        {
            sum = sum + car[x][0];
        }
    }
    if(index == 1)
    {
        for(int x = 1 ; x < 5 ; x++)
        {
            sum = sum + car[x][1];
        }
    }
    if(index == 2)
    {
        for(int x =  2; x < 5 ; x++)
        {
            sum = sum + car[x][2];
        }
    }
    if(index == 3)
    {
        for(int x = 3; x < 5 ; x++)
        {
            sum = sum + car[x][3];
        }
    }
    if(index == 4)
    {
        for(int x = 4; x < 5 ; x++)
        {
            sum = sum + car[x][4];
        }
    }
}
int returnindex(string color)
{
    int index ;
    if(color == "red")
    {
        index = 0;
    }
    if(color == "black")
    {
        index = 1;
    }
     if(color == "brown")
    {
        index = 2;
    }
     if(color == "blue")
    {
        index = 3;
    }
     if(color == "grey")
    {
        index = 4;
    }
    return index;
}
