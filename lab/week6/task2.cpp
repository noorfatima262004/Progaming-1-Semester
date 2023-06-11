#include <iostream>
using namespace std;
string result( int age,char gender);
main()
{
    int age;
    char gender;
    cout << "Enter your age=";
    cin >> age;
    cout << "Enter your gender=";
    cin >> gender;
    string name = result(age,gender);
    cout << name;
}

string result( int age,char gender)	
{
    string name;
    if(age >= 16 && gender =='m')
    {
        name ="MR.";
    }
    if(age < 16 && gender =='m')
    {
        name = "Master";
    }
     if(age >= 16 && gender =='f')
    {
        name = "Ms.";
    }
     if(age < 16 && gender =='f')
    {
        name = "Miss";
    }
    return name;
}

	  

		
	
	