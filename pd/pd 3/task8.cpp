#include <iostream>
using namespace std;
main(){
float vegcost, fruitcost, kgveg, kgfruits;
int tveg, tfruit,total;
cout << "price of vegetable per kg:";
cin >> vegcost;
cout<< " price of fruits per kg:";
cin >> fruitcost;
cout<< " weight of vegtable:";
cin>> kgveg;
cout << " wieght of fruits:";
cin>> kgfruits;
tveg= vegcost * kgveg;
tfruit= fruitcost * kgfruits;
total= (tveg + tfruit) * 1.94;
cout <<  "total earning in pkr is:" << total << endl;
}