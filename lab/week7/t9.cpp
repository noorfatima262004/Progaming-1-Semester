#include <iostream>
using namespace std;
void printpercentage(int lines);
main()
{
    double lines, num;
    cout << "Enter the number of lines=";
    cin >> lines;
    printpercentage(lines);
}
void printpercentage(int lines)
{
    double per1 = 0 , per2 = 0 , per3 = 0 , per4 = 0 , per5 = 0;

    for (int x = 1; x <= lines; x++)
    {
        int num;
        cout << "Enter a num=";
        cin >> num;

        if (num < 200)
        {
            per1 = 1 + per1;
        }
        else if (num >= 200 && num < 400)
        {
            per2 = 1 + per2;
        }
        else if (num >= 400 && num < 600)
        {
            per3 = 1 + per3;
        }
        else if (num >= 600 && num < 800)
        {
            per4 = 1 + per4;
        }
        else if (num >= 800)
        {
            per5 = 1 + per5;
        }
    }
        cout << "per1 =" << (per1 / lines) * 100 << endl;
        cout << "per2=" << (per2 / lines) * 100 << endl;
        cout << "per3 =" << (per3 / lines) * 100 << endl;
        cout << "per4 =" << (per4 / lines) * 100 << endl;
        cout << "per5 =" << (per5 / lines) * 100 << endl;

}