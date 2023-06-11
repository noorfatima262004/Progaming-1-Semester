#include <iostream>
using namespace std;
main()
{
    int size;
    float num1, num2, num3, num4;
    float sum;
    bool output;
    float due;
    cout << "Enter the size of array that is 4=";
    cin >> size;
    cout << "Enter the total due=";
    cin >> due;
    float num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter the num=";
        cin >> num[x];

        num1 = 0.25 * num[0];
        num2 = 0.10 * num[1];
        num3 = 0.05 * num[2];
        num4 = 0.01 * num[3];

        sum = (num1 + num2 + num3 + num4);
        if (sum < due)
        {
            output = false;
        }
        else if (sum >= due)
        {
            output = true;
        }
    }
    cout << output;
}