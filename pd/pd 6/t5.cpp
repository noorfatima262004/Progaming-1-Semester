#include <iostream>
using namespace std;
float price(string day, string fruit,float quan);
int price1(string day, string fruit);

main()
{
    string fruit, day;
    float quan;
    cout<< "Enter the fruit =";
    cin >> fruit;
    cout << "Enter the day of week=";
    cin >> day;
    int output = price1(day, fruit);
    if ( output == 1 || output == 2)
    {
	cout << "ERROR";
return 0;
    }
else{
    cout << "Enter the quantity=";
    cin >> quan;
    float result =  price( day, fruit,quan);
    cout << result;
}
    
}
float price(string day, string fruit, float quan)
 {
       float result;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
      if (fruit == "banana")
        {
             result = quan * 2.50;
        }
        if (fruit == "apple")
        {
             result = quan * 1.20;
        }
        if (fruit == "orange")
        {
             result = quan * 0.85;
        }
        if (fruit == "grapefruit")
        {
             result = quan * 1.45;
        }
        if (fruit == "kiwi")
        {
             result = quan * 2.70;
        }
        if (fruit == "pineapple")
        {
             result = quan * 5.50;
        }
        if (fruit == "grapes")
        {
             result = quan * 3.85;
        }
    }
   else if (day == "satursday" || day == "sunday" )
    {
        if (fruit == "banana")
        {
             result = quan * 2.70;
        }
        if (fruit == "apple")
        {
             result = quan * 1.25;
        }
        if (fruit == "orange")
        {
             result = quan * 0.90;
        }
        if (fruit == "grapefruit")
        {
             result = quan * 1.60;
        }
        if (fruit == "kiwi")
        {
             result = quan * 3.00;
        }
        if (fruit == "pineapple")
        {
             result = quan * 5.60;
        }
        if (fruit == "grapes")
        {   
             result = quan * 4.20;
        }
    }
    return result;
}
int price1(string day, string fruit)
{
	  if (day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday" && day != "friday" && day != "satursday" && day != "sunday"  )
		return 1;
	  if (( fruit != "grapes") && (fruit != "kiwi") && (fruit != "pineapple") && (fruit != "grapefruit") && (fruit != "orange") && (fruit !="apple") && (fruit != "banana" ))
		return 2;
}