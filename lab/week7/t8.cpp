#include <iostream>
using namespace std;
float HCF(int num1, int num2);
float  LCM(int num1, int num2, int hcf);
main()
{
    float num1, num2, rem1, rem2;

    cout << "enter first num =";
    cin >> num1;
    cout << "enter second num=";
    cin >> num2;
    float hcf = HCF(num1, num2);
    cout<<"HCF :"<< hcf;
    float lcm = LCM(num1,num2,hcf);
    
}
float HCF(int num1, int num2)
{ 
    int gcd;
    for (int value = 1; value < num2 ; value++)
    {
        
        if(num1%value==0 && num2%value==0)
        {
         gcd =value;
        }
    }
 return gcd;
}
float LCM(int num1, int num2, int hcf)
{
    int lcm = (num1 * num2) / hcf;
    cout << "LCM= " << lcm << endl;
    return lcm;
}
