#include <iostream>
using namespace std;
float calculateprice(float inheritedmoney , float year);
main()
{
    float inheritedmoney , year;
    cout << "Enter the money IVAN inherited=";
    cin >> inheritedmoney;
    cout << "Enter the year he want to live in past=";
    cin>> year;
    float result = calculateprice(inheritedmoney ,year);
    
}
float calculateprice(float inheritedmoney , float year)
{
    int age = 17;
    for(int pastyear =1800 ; pastyear <= year ; pastyear++)
    {
        age = age + 1;
        if(pastyear%2 == 0)
        {
            inheritedmoney = inheritedmoney - 12000.00;
        }
         if(pastyear%2 != 0)
        {
            inheritedmoney = inheritedmoney - (12000.00 + 50.00 * (age));
        }
    }
    if(inheritedmoney < 0)
    {
        cout << "NO" << "HE WILL NEED  " << -inheritedmoney << "  DOLLARS TO  SURVIVE. " << endl;
    }
    if(inheritedmoney > 0)
    {
      cout << "YES" << "HE WILL LIVE CAREFREE AND WILL HAVE  " << inheritedmoney << "  DOLLARS LEFT. " << endl;
    }
    return inheritedmoney;
    
}
