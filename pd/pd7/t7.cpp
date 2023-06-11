#include <iostream>
using namespace std;
main()
{
    float cargo, tonage;
    float percentage1, percentage2, percentage3;
    float average;
    float minibus = 0, truck = 0, train = 0;
    float buston = 0, truckton = 0, trainton = 0;

    cout << "Enter the num of cargo=";
    cin >> cargo;

    for (int x = 1; x <= cargo; x++)
    {
        cout << "Enter the tonage=";
        cin >> tonage;
        if (tonage <= 3)
        {
            minibus = minibus + tonage;
            buston = buston + (tonage * 200);
         
        }
        if (tonage > 3 && tonage <= 11)
        {
            truck = truck + tonage;
            truckton = truckton + (tonage * 174);
          
        }
        if (tonage >= 11)
        {
            train = train + tonage;
            trainton = trainton + (tonage * 120);
       
        }
    }
    int sum = minibus + truck + train;
    cout << sum << endl;
    percentage1 = (minibus * 100) / sum;
    percentage2 = (truck * 100) / sum;
    percentage3 = (train * 100) / sum;
    average = (buston + truckton + trainton) / sum;

    cout << "AVERAGE IS=" << average << endl;
    cout << "PERCENTAGE BY MINIBUBS=" << percentage1 << endl;
    cout << "PERCENTAGE BY TRUCK =" << percentage2 << endl;
    cout << "PERCENTAGE BY TRAIN=" << percentage3 << endl;
}
