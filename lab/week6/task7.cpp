#include <iostream>
using namespace std;
float cost(string pro,string city, int quantity);
main()
{
    string city,pro;
    int quantity;
    cout << "Enter city=";
    cin>> city;
    cout << "enter the product=";
    cin>> pro;
    cout <<"Enter the qunaity=";
    cin>> quantity;
    float result= cost(pro,city,quantity);
    cout << "the price is =" << result;
}
float cost(string pro, string city, int quantity)
{
    float result;
    if(city == "sofia")
    {
        if(pro =="coffee")
        {
            result = quantity *0.50;
        }
         if(pro =="water")
        {
            result = quantity *0.80;
        }
         if(pro =="bear")
        {
            result = quantity *1.20;
        }
         if(pro =="sweets")
        {
            result = quantity *1.45;
        }
         if(pro =="peanuts")
        {
            result = quantity *1.60;
        }
    }
    if(city == "plovdiv")
    {
        if(pro =="coffee")
        {
            result = quantity *0.40;
        }
         if(pro =="water")
        {
            result = quantity *0.70;
        }
         if(pro =="bear")
        {
            result = quantity *1.15;
        }
         if(pro =="sweets")
        {
            result = quantity *1.30;
        }
         if(pro =="peanuts")
        {
            result = quantity *1.50;
        }
    }
    if(city == "varna")
    {
        if(pro =="coffee")
        {
            result = quantity *0.45;
        }
         if(pro =="water")
        {
            result = quantity *0.70;
        }
         if(pro =="bear")
        {
            result = quantity *1.10;
        }
         if(pro =="sweets")
        {
            result = quantity *1.35;
        }
         if(pro =="peanuts")
        {
            result = quantity *1.55;
        }
    }
    return result;
}
	
	  

		
	
	