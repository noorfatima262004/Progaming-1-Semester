#include <iostream>
using namespace std;
main()
{
string name;
float m_number;
float i_number;
float e_number;
float aggregate;
float agg_matric,agg_inter,agg_ecat;
cout << " enter your name:";
cin>> name;
cout << "enter your matric number:";
cin >>m_number;
cout << " enter your intermediate number:";
cin >> i_number;
cout << "enter your ecat number:";
cin >> e_number;
agg_matric = (m_number/1100) * 40;
cout << "your matric aggregate is:" << agg_matric << endl;
agg_inter = (i_number/1100) * 50;
cout << "your inter number is:"<< agg_inter << endl;
agg_ecat = (e_number/400) * 10;
cout << "your ecat aggregate is:" << agg_ecat<< endl;
aggregate =  agg_matric+  + agg_inter + agg_ecat;
cout << " aggregate is: " << aggregate ;
}
