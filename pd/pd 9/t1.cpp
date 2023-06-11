#include <iostream>
using namespace std;
main()
{
    string buy_fruit;
    float weight;
    int index = -1;
    ;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the name of fruit you want to purchase=";
    cin >> buy_fruit;
    cout << "Enter the weight in kg of fruit=";
    cin >> weight;
    for (int x = 0; x < 4; x++)
    {
        if (buy_fruit == fruit[x])
            index = x;
    }

    if (index != -1)
    {
        cout << fruit[index] << "\t"
             << "total price is = " << price[index] * weight << endl;
    }
    else
        cout << "NOT FOUND";
}