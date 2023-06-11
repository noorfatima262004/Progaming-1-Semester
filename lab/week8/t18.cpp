#include <iostream>
using namespace std;
main()
{
    int size1, size2;
    float total3;
    cout << "Enter the size of first array=";
    cin >> size1;

    float array1[size1];

    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the num=";
        cin >> array1[i];
    }

    cout << "Enter the size of first array=";
    cin >> size2;
    float array2[size2];
    for (int j = 0; j < size2; j++)
    {
        cout << "Enter the num=";
        cin >> array2[j];
    }

    float array3[size1 + size2];
    array3[0] = array1[0];
    array3[(size1 + size2) - 1] = array1[1];

    for (int x = 1; x <= size2; x++)
    {
        array3[x] = array2[x - 1];
        cout << array3[x];
    }
    cout << endl;
    for (int x = 0; x < (size1 + size2); x++)
    {
        cout << array3[x];
    }
}