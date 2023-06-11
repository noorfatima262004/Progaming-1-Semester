#include <iostream>
#include <cmath>
using namespace std;
float tprice(int people, float budget, string seat);
main()
{
    float budget;
    int people;
    string seat;
    float price;
    double remain;
    cout << "Enter the budget=";
    cin >> budget;
    cout << "Enter number of people=";
    cin>> people;
    cout << "Enter the category=";
    cin >> seat;
    double result = tprice(people, budget , seat);
    if(result > 0)
    {
        cout << "YES!  you have left" << result << "  leva";
    }
     if(result < 0)
    {
          result =fabs(result);
        cout << "NO!  you need =" << result << "   leva";
      
    
    }
}
float tprice(int people, float budget, string seat)
{
    double result,price,remain;
    if (people >= 1 && people <=4 )
    {
        remain = budget -(budget * 0.75);
            if(seat == "VIP" )
           {
             price = people * 499.99;
           }
           if(seat == "normal")
            {
             price = people * 249.99;
            }
        result = remain - price; 
    }
    else if (people >= 5 && people <= 9 )
    {
        remain = budget -(budget * 0.6);
             if(seat == "VIP" )
           {
             price = people * 499.99;
           }
           if(seat == "normal")
            {
             price = people * 249.99;
            }
           result = remain - price; 
    }
     else if (people >= 10 && people <= 24 )
    {
        remain = budget -(budget * 0.5);
             if(seat == "VIP" )
           {
             price = people * 499.99;
           }
           if(seat == "normal")
            {
             price = people * 249.99;
            }
        result = remain - price; 
    }
    else if (people >= 25 && people <= 49 )
    {
        remain = budget -(budget * 0.4);
             if(seat == "VIP" )
           {
            price = people * 499.99;
           }
           if(seat == "normal")
            {
             price = people * 249.99;
            }
        result = remain - price;    
    }
    else if (people >= 50 )
    {
        remain = budget -(budget * 0.25);
             if(seat == "VIP" )
           {
             price = people * 499.99;
           }if(seat == "normal")
            {
             price = people * 249.99;
            }
           result = remain - price;     
    }
    return result;
   
    
   
}
	  

		
	
	