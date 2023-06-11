#include <iostream>
using namespace std;
float price(char code , char time, float min);
main()
{
    char code, time;
    float min;
    cout<<"Enter the code=";
    cin >> code;
    cout << "Enter the time of day=";
    cin >> time;
    cout << "Enter the num of mins of call =";
    cin >> min;
    system("cls");
    cout << "THE CODE YOU ENTERED IS=" << code << endl;
    cout << "THE TIME OF DAY IS=" << time << endl;
    cout << "TOTAL MIN YOU USED ARE =" << min << endl;
    float result = price (code , time, min);
    cout << "PRICE= " << result;

}
float price(char code, char time, float min)
{
    float result;
     
    if(code == 'R' || code == 'r')
    {
        if(min <= 50)
             result =10.00;
        if(min > 50)
            result = (min * 0.20) + 10.00;
    }
    else if(code == 'P' || code == 'p' && (time  == 'D' || time == 'd') )
    {
        if ( min <= 75)
            result =25.00;
        if(min > 75)
            result = (min * 0.10) + 25.00;
     }
   else  if(code == 'P' || code == 'p' && (time  == 'N' || time == 'n') )
    {
        if ( min <= 100)
            result =25.00;
        if(min > 100)
            result = (min * 0.05) + 25.00;
    }
	if(code != 'R' || code != 'P' )
   {
    return 0;
   }
 
 return result;
}