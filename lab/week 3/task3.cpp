#include <iostream>
using namespace std;
main()
{
int pounds;
float kilogram = 0.45;
float convertedvalue;
cout << "enter weights in pounds:";
cin>>pounds;
convertedvalue = pounds * kilogram;
cout << "conversion" << convertedvalue;
}