#include <iostream>
using namespace std;
void gotoxy(int x, int y);

main()
{	

    int x, y, h;

    cout << "Enter the value of=";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
	

    if ((x > h && x < 2 * h) && (y > h && y < 4 * h))
    {
        cout << "inside";
    }
    else if ((x > 0 && x < 3 * h) && (y < h && y > 0))
    {
        cout << "inside";
    }
    else if ((x == h || x == 2 * h) && (y >= h && y <=  4* h))
    {
        cout << "Border";
    }
    else if ((y == 0 || y == h) && (x >= 0 && x <= 3 * h))
    {
        cout << "Border";
    }
	else if ((x >= h && x <=2 * h) && (y == 4 * h))
    {
        cout << "Border";
    }
	else if ((x == 0  || x == 3 * h) && (y >= 0 && y <=  h))
    {
        cout << "Border";
    }


   else
	{
	cout<<"Outside";
	}
}


