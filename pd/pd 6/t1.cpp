#include <iostream>
using namespace std;
string play(string temp, string weather);
main()
{
    string temp, weather;
    cout << "Enter the temp=";
    cin >> temp;
    cout << "Enter the weather=";
    cin >> weather;
    string result = play(temp,weather);
    cout << result;
}
string play(string temp , string weather)
{
    string result;
    if(temp == "warm" && weather == "dry")
    {
        result = "PLAY TENIS";
    }
      
    if(temp == "warm" && weather == "humid")
    {
        result = "SWIM";
    }
      
    if(temp == "cold" && weather == "dry")
    {
        result = "PLAY BASKETBALL";
    }
     
    if(temp == "cold" && weather == "humid")
    {
        result = "WATCH TV";
    }
    return result;
    
}