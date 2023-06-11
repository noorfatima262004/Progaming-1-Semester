#include <iostream>
using namespace std;
main()
{
    int size;
    int found = -1;
    int price = 500;
    string movie;
    float totalprice;
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrier"};

    cout << "Price of each movie is = " << price << endl;
    cout << "Enter the name of movie you want to see=";
    cin >> movie;

    for (int x = 0; x < 5; x++)
    {
        if (movies[x] == movie)
        {
            cout<<"test";
            found = x;
        }

    }
    if (found != -1)
    {
        if (found % 2 == 0)
        {
            totalprice = price - (price * 0.1);
            cout << "Your discounted price is 1 = " << totalprice;
        }
        if (found % 2 != 0)
        {
            totalprice = price - (price * 0.05);
            cout << "Your discounted price is 2 = " << totalprice;
        }
    }
    else
    {

        cout << "MOVIE NOT FOUND..";
    }
}