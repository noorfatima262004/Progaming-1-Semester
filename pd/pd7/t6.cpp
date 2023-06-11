#include <iostream>
using namespace std;
void percenatge(int num, int lines);
main()
{
    int lines, num;
    cout << "Enter the line of num=";
    cin >> lines;
    percenatge(num , lines);
}
void percenatge(int num, int lines)
{
    float P1= 0 , P2=0 , P3=0;
    for(int x = 1; x <= lines ; x++)
    {
    cout<< "Enter the numbers=";
    cin >> num ;

     if(num%2 == 0 )
     {
        P1 = P1 +1;
     }
     if(num%3 == 0 )
     {
        P2 = P2 +1;
     }
     if(num%4== 0 )
     {
        P3 = P3 +1;
     }
    }
    cout << "PERCENAGE1=" << ((P1 / lines) * 100) << endl;
    cout << "PERCENAGE2=" << ((P2 / lines) * 100) << endl;
    cout << "PERCENAGE3=" << ((P3 / lines) * 100) << endl;
}