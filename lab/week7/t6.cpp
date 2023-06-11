#include<iostream>
using namespace  std;
main()
{
    int n;
    cout << "enter a num";
    cin >> n;
    for(int num = 1 ; num <= 10; num++)
    {
        int count = n * num;
        cout << n  << " *  " << num <<  " =  " << count << endl;
    }
}
