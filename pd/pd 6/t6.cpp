#include <iostream>
using namespace std;
main()
{
    string month,place;
    float days;
    double studio, apartment;
    cout << "Enter the month=";
    cin >> month;
    cout<< "Enter the days of stay=";
    cin >> days;


    if (month == "may" || month == "october")
    {
       
      studio = days * 50;
      apartment = days * 65;
             if( days > 7 && days < 14)
              {
               
                studio = studio - (studio * 0.05);
              }
             if(days > 14)
               {
           
           studio = studio - (studio * 0.3);
           apartment = apartment -( apartment * 0.1); 
               }
    
     }
    
    

   else if (month == "june" || month == "september" )
    {
       
        
        studio = days * 75.20;
         apartment = days * 68.70;
             if(days > 14)
               {
                studio = studio - (studio * 0.2);
                apartment = apartment - (apartment * 0.1);
               }
    }
    else if (month == "july" || month == "august" )
    {
        
         studio = days * 76; 
         apartment = days * 77;
             if(days > 14)
             apartment = apartment - (apartment * 0.1);

    }
   
        cout << "the studio=" << studio << endl;
        cout <<"the apartment=" << apartment << endl;
    

}
