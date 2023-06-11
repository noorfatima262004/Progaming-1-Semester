#include <iostream>
using namespace std;
int position(int weight);
int boxweight[100];
int n;
main()
{
    int p;
    cout << "Enter the number of boxes ";
    cin >> n;
    int arrangedWeight[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter weight ";
        cin >> boxweight[i];
    }
    for (int i = 0; i < n; i++)
    {
        p = position(boxweight[i]);
        arrangedWeight[p] = boxweight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrangedWeight[i] << " ";
    }
}
int position(int weight)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (boxweight[i] < weight)
        {
            p++;
        }
    }
    return p;
}