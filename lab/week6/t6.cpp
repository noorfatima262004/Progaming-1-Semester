#include <iostream>
using namespace std;
float dis(int price,string day,string month);
main()
{
    int price;
    string day , month;
    cout << "Enter price=";
    cin >> price;
    cout << "Enter day=";
    cin >> day;
    cout << "Enter month=";
    cin >> month;
    float result = dis(price,day,month);
    cout << result;
}
float dis(int price,string day,string month)
{
    float discount,discount1;
    discount = price - (price *0.1);
    discount1= price - (price *0.05);
   
    if(day == "sunday" && month == "october")
    {
        discount = discount;
    }    
    else if(day == "sunday" && month != "october")
    {
        discount = discount1;
    }
    else
    {
        discount = 0;
    }
   
    return discount;
    
}
	
	  

		
	
	