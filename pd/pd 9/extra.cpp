                // code with asci.
   
#include <iostream>
using namespace std;
string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
void danceMove(int position);
main()
{
    string code;
    int codelength, p = 0;
    cout << "Enter code  = ";
    cin >> code;
    codelength = code.length();
    
    if (codelength == 4)
    {
        int p1 = code[0] - 48, p2 = code[1] - 48, p3 = code[2] - 48, p4 = code[3] - 48;
        
        if ((p1 > -1 && p1 < 10) && (p2 > -1 && p2 < 10) && (p3 > -1 && p3 < 10) && (p4 > -1 && p4 < 10))
        {
            int position;
            position = 0;

            for (int i = 0; i < 4; i++)
            {
                p = code[i] - 48;
                position = i + p;
                danceMove(position);
            }
        }
        else
        {
            cout << "Invalid input ";
        }
    }
    else
    {
        cout << "Invalid input ";
    }
}
void danceMove(int position)
{
    if (position <= 9)
    {
        cout << moves[position] << " ";
    }
    else if (position > 9)
    {
        position = position - 10;
        cout << moves[position] << " ";
    }
}