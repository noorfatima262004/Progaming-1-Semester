           // code without asci 

#include <iostream>
using namespace std;
int newnum[4];
string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
void move(string pin);
main()
{
    string pin;
    int position = 0;
    int codelength;

    cout << "Enter the pin = ";
    cin >> pin;
    codelength = pin.length();

    if (codelength == 4)
    {
        for (int x = 0; x < 4; x++)
        {
            if (pin[x] != '0' && pin[x] != '1' && pin[x] != '2' && pin[x] != '3' && pin[x] != '4' && pin[x] != '5' && pin[x] != '6' && pin[x] != '7' && pin[x] != '8' && pin[x] != '9')
            {
                cout << "INVALID INPUT...";
                return 0;
            }
        }
    }
    else
    {
        cout << "INVALID INPUT....";
        return 0;
    }

    move(pin);

    for (int x = 0; x < 4; x++)
    {
        position = newnum[x] + x;
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
}
void move(string pin)
{
    for (int x = 0; x < 4; x++)
    {

        if (pin[x] == '0')
        {
            newnum[x] = 0;
            continue;
        }

        else if (pin[x] == '1')
        {
            newnum[x] = 1;
            continue;
        }

        else if (pin[x] == '2')
        {
            newnum[x] = 2;
            continue;
        }

        else if (pin[x] == '3')
        {
            newnum[x] = 3;
            continue;
        }

        else if (pin[x] == '4')
        {
            newnum[x] = 4;
            continue;
        }

        else if (pin[x] == '5')
        {
            newnum[x] = 5;
            continue;
        }

        else if (pin[x] == '6')
        {
            newnum[x] = 6;
            continue;
        }

        else if (pin[x] == '7')
        {
            newnum[x] = 7;
            continue;
        }
        else if (pin[x] == '8')
        {
            newnum[x] = 8;
            continue;
        }
        else if (pin[x] == '9')
        {
            newnum[x] = 9;
            continue;
        }
    }
}
