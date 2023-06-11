#include <iostream>
using namespace std;
bool peakValue(int prev, int current, int next);
main()
{
    int size;
    cout << " Enter size of elements you want to enter : ";
    cin >> size;
    int number[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter element " ;
        cin >> number[x];
    }
    int peak[size];
    int count = 0;
    for (int x = 1; x < size - 1; x++)
    {
        bool flag = peakValue(number[x - 1], number[x], number[x + 1]);
        if (flag == true)
        {
            peak[count] = number[x];
            cout << peak[count] << endl;
            count++;
            cout << count << endl;
        }
    }
    if (count > 0)
    {
        for (int x = 0; x < count; x++)
        {
            cout << peak[x] << " ";
        }
    }
    else
    {
        cout << "No peak found.";
    }
}
bool peakValue(int prev, int current, int next)
{
    bool flag = false;
    if (current > prev && current > next)
    {
        flag = true;
    }
    return flag;
}