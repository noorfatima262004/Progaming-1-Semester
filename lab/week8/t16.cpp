#include <iostream>
using namespace std;
main()
{
    int size;
    float sum = 0;
    cout << "Enter the size of array= ";
    cin >> size;
    float resistance[size];

    for(int x =0; x < size; x++)
    {
        cout << "Enter the resistance of circuits=";
        cin >> resistance[x];
        sum = sum + resistance[x];

    }
    cout << "the total resistance is =" << sum ;
}
