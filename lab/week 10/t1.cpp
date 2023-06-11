#include <iostream>
using namespace std;
int progress();
int size;
int days[1000];
main()
{
    cout << "Enter the size of array = ";
    cin >> size;
    // int days[size];
    for (int x = 0; x < size; x++)
    {
        cout << "enter the num of days = ";
        cin >> days[x];
    }
    int result = progress();
    cout << result << " ";
}
int progress()
{
    int count = 0;
    for (int x = 0; x < size - 1; x++)
    {
        if (days[x] < days[x + 1])
        {
            count++;
        }
      //  cout << count << endl;
    }
    return count;
}