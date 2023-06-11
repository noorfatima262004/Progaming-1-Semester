#include <iostream>
using namespace std;
float income(string seat ,int total);
main()
{
    string seat;
    int rows, column,total;
    cout << "Enter the type of screening=";
    cin >> seat;
    cout << "Enter the no. of rows=";
    cin >>rows;
    cout << "Enter the no. of colums=";
    cin >> column;
    total = rows * column;
    
    float result = income(seat,total);
    cout << "The total price is=" << result;
}
float income(string seat ,int total)
{
       
        float result;
        if(seat == "premium")
        {
            result = total * 12;
        
        }
         if(seat == "normal")
        {
          result = total * 7.50;
            
        }
         if(seat == "discount")
        {
           result = total * 5.00;
            
        }
        

    return result;
}


	
	  

		
	
	