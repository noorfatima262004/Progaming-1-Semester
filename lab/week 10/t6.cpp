#include <iostream>
using namespace std;
bool isRepeating(int repeatingcycle);
int size;
int num[1000];
main()
{
    int repeatingcycle;
    bool flag;
    cout << "Enter the size of array =  ";
    cin >> size;

    for (int x = 0; x < size ; x++)
    {
        cout << "Enter the  numbers ";
        cin >> num[x];
    }
    cout << "Enter how many times there is repition = ";
    cin >> repeatingcycle;
    
    flag = isRepeating(repeatingcycle);

    if (flag == true)
    {
        cout << "TRUE ";
    }
    else
    {
        cout << "FALSE ";
    }
}
bool isRepeating(int repeatingcycle)
{
    int count = 0;
    if (repeatingcycle < size)
    {
        int checkingnum = 0;
        for (int x = 0; x < size ; x++)
        {
            checkingnum = repeatingcycle + x;
          //  cout << "num1 index" << num1 << endl;
            if (num[x] == num[checkingnum])
            {
                count++;
            }
        }
      //  cout << "count " << count << endl;
        if (count == (size - repeatingcycle))
        {
           // cout << "result size minus repeating number =" << size - repeating << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}