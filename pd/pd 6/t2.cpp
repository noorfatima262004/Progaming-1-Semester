#include <iostream>
using namespace std;
string grade(float per);
main()
{
    string name;
    float emarks, mmarks, cmarks, smarks, bmarks, tmarks, per;
    cout << "Enter the name=";
    cin >> name;
    cout << "Enter  marks of English out of 100=";
    cin >> emarks;
     cout << "Enter  marks of Maths out of 100=";
    cin >> mmarks;
     cout << "Enter  marks of Chemistry out of 100=";
    cin >> cmarks;
     cout << "Enter  marks of Social studies out of 100=";
    cin >> smarks;
     cout << "Enter  marks of Biology out of 100=";
    cin >> bmarks;
    system("cls");
    cout << "NAME =" << name << endl;
    tmarks = emarks + mmarks + cmarks + smarks + bmarks;
    cout <<"TOTAL MARKS ="<<  tmarks << endl;
    per = (tmarks * 100)/ 500;
    cout << "PERCENTAGE ="<< per<< endl;
    string result = grade (per);
    cout <<"GRADE= " << result << endl;


}
string  grade(float per)
{
    string result;
     if(per > 90 && per < 100)
     {
        result ="A+";
    }
     if(per > 80 && per <= 90)
     {
        result ="A ";
    }
     if(per > 70  && per <= 80)
     {
        result ="B+";
    }
     if(per > 60 && per <= 70)
     {
        result ="A ";
    }
     if(per >= 50 && per <= 60)
     {
        result ="C ";
    }
    return result;
}