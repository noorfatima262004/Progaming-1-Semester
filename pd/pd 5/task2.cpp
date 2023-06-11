#include <iostream>
using namespace std;
main()
{
    int price,final,m,e,s,v,t,taxamount;
    char type;
    cout << "the price of vehicle = ";
    cin >> price;
    cout << " the type of vehicle=";
    cin >> type;
    m=(price*6)/100;
    e=(price*8)/100;
    s=(price*10)/100;
    t=(price*12)/100;
    v=(price*15)/100;

    if(type == 'M')
    {
        taxamount= price *(m/100);
        final = price + taxamount;
        cout << "the final price on a vehicle of type=" << type << "  after adding tax=" << taxamount <<"  with the final price=" << final<< endl;
    }
    if(type == 'E')
    {
        taxamount= price * (e/100);
        final = price + taxamount;
        cout << "the final price on vehicle of type=" << type << "  after addition=" << taxamount << "  with the final price=" << final<< endl;
    }
    if(type == 'S')
    {
        taxamount= price * (s/100);
        final = price + taxamount;
        cout << "the final price on vehicle of type=" << type << "  after addition=" << taxamount << "  with the final price=" << final<< endl;
    }
    if(type == 'T')
    {
        taxamount= price * (t/100);
        final = price + taxamount;
        cout << "the final price on vehicle of type=" << type << "  after addition=" << taxamount << "  with the final price=" << final<< endl;
    }
    if(type == 'V')
    {
        taxamount= price * (v/100);
        final = price + taxamount;
        cout << "the final price on vehicle of type=" << type << "  after addition=" << taxamount << "  with the final price=" << final<< endl;
    }

}