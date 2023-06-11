#include <iostream>
using namespace std;
int series(int n1, int n2, int num);
main()
{
    int num , n1, n2;
    cout << "Enter the num=";
    cin >> num;
    int output = series(n1 , n2,num);
}
int series(int n1, int n2, int num)
{
    n1 =0 ; n2 = 1;
    cout << n1 <<" " << endl << n2 << endl;
     for(int x=0 ; x <=num -2 ; x++)
     {
        int result =n1 + n2;
        cout << result << endl;
        n1 = n2;
        n2 = result;
     }
}