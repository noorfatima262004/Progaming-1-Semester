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
    float discount;
    discount = price - (price *0.1);
    if(day == "sunday" && (month == "october" || month == "march" || month =="august"))
    {
          

         
         {
            discount = discount;
         }  
         else
        {
        discount = 0;
        }  
    }
    
   return discount;
    
}
	  

		
	
	
		
	
	  

		
	
	