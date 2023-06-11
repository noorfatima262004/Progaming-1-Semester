#include <iostream>
using namespace std;
string astrology(int date , string month);
main()
{
    int date;
    string month;
     cout << "Enter month of birth=";
    cin >> month;
    cout << "Enter date of birth=";
    cin >> date;
    string result = astrology(date , month);
    cout << result;

}
string astrology (int date , string month)
{
    string result;
    if( month == "january")
    {
        if(date <= 19)
             result = "CAPRICON";
         else 
            result = "AQUARIUS";
    }
    if( month == "february")
    {
        if(date <= 18)
             result = "AQUARIUS";
         else 
            result = "PISCES";
    }
    if( month == "march")
    {
        if(date <= 21)
             result = "PICES";
         else 
            result = "ARIES";
    }
     if( month == "april")
    {
        if(date <= 19)
             result = "ARIES";
         else 
            result = "TAURUS";
    }
    if( month == "may")
    {
        if(date <= 20)
             result = "TAURUS";
         else 
            result = "GEMINI";
    }
    if( month == "june")
    {
        if(date <= 20)
             result = "GEMINI";
         else 
            result = "CANCER";
    }
    if( month == "july")
    {
        if(date <= 22)
             result = "CANCER";
         else 
            result = "LEO";
    }
    if( month == "august")
    {
        if(date <= 22)
             result = "LEO";
         else 
            result = "VIRGO";
    }
    if( month == "september")
    {
        if(date <= 22)
             result = "VIRGO";
         else 
            result = "LIBRA";
    }
    if( month == "october")
    {
        if(date <= 22)
             result = "LIBRA";
         else 
            result = "SCORPIO";
    }
    if( month == "november")
    {
        if(date <= 21)
             result = "SORPIO";
         else 
            result = "SAGITTARIUS";
    }
    if( month == "december")
    {
        if(date <= 21)
             result = "SAGITTARIUS";
        else 
           result = "CAPRICON";
    }

    return result;
}
    

    
    
        
