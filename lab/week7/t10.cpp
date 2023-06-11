#include <iostream>
using namespace std;
void calculatemoney(float age, float toyprice, float price);
main()
{
    float age, toyprice, price;
    cout << "Enter Lilly's age =";
    cin >> age;
    cout << "Enter the price of X-box = ";
    cin >> price;
    cout << "Enter the price of each toy =";
    cin >> toyprice;
    calculatemoney(age, toyprice, price);
}
void calculatemoney(float age, float toyprice, float price)
{
    float evenyears = 0, oddyears = 0, totalevenmoney = 0;
    float evenyearsmoney, soldprice, totalmoney;
 
   for (int birthday = 1; birthday <= age; birthday++)
    {
        if (birthday % 2 == 0)
        {
            evenyears = evenyears + 1;
            evenyearsmoney = (evenyears * 10) - 1;
            totalevenmoney = totalevenmoney + evenyearsmoney;
        }
        if (birthday % 2 != 0)
        {
            oddyears = oddyears + 1;
        }
    }
    soldprice = toyprice * oddyears;
    totalmoney = soldprice + totalevenmoney;
    if (totalmoney - price < 0)
    {
        cout << "NO! " << price - totalmoney << "    are required." << endl;
    }
     if (totalmoney - price > 0)
    {
        cout << "YES! " << totalmoney - price << "   are remaining ." << endl;
    }
}