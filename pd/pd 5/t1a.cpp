#include<iostream>
#include<windows.h>

using namespace std;

int x = 10;
void myfunction()
{
    cout<< "The value of the x is: " << x;
    int x = 20;
}

main()
{
    myfunction();
    int x =  20;
    cout << "the value of x is: " << x;
    myfunction();
}