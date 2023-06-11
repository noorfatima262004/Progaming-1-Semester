#include <iostream>
using namespace std;
void printmenu();
void aggregate1(float num1, float num2, float num3);
void aggregate2(float num4, float num5, float num6);
void compare(int num3, int num6, string name, string name1);
main()
{
int choice;
string name,name1;
char key;
float num1, num2, num3, num4, num5, num6;
float agg1;

printmenu();

cout<< "Enter choice=";
cin>> choice;
	if(choice ==1)
  {
    system("cls");
    cout<< "You choosed= 1" << endl;
    cout << " Enter name of first student=";
    cin >> name;
    cout<< "Enter numbers of matric=";
    cin>> num1;
    cout << "Enter numbers of inter=";
    cin>> num2;
    cout << "Enter numbers of ecat=";
    cin>> num3;
    cout<< "To continue press any key....";
    cin >> key;

   system("cls");
   printmenu();
   cout<< "Enter choice=";
cin>> choice;
  }
if(choice ==2)
  {
    system("cls");
    cout<< "You choosed= 2" << endl;
    cout << " Enter name of second student=";
    cin >> name1;
    cout<< "Enter numbers of matric=";
    cin>> num4;
    cout << "Enter numbers of inter=";
    cin>> num5;
    cout << "Enter numbers of ecat=";
    cin>> num6;
    cout<< "To continue press any key....";
    cin >> key;
    system("cls");
printmenu();
cout<< "Enter choice=";
cin>> choice;
  }

if(choice==3)
  {     
	system("cls");
	cout<< "You choosed= 3" << endl;
         aggregate1( num1,  num2,  num3);
	cout<< "To continue press any key....";
        cin >> key;
	system("cls");
printmenu();
cout<< "Enter choice=";
cin>> choice;
}
if(choice==4)
  {     
	system("cls");
	cout<< "You choosed= 4" << endl;
         aggregate2( num4,  num5,  num6);
	cout<< "To continue press any key....";
        cin >> key;
	system("cls");
printmenu();
cout<< "Enter choice=";
cin>> choice;
}
if(choice==5)
  {     
	system("cls");
	cout<< "You choosed= 5" << endl;
         compare(num3,num6, name, name1);
	cout<< "To continue press any key....";
        cin >> key;
	system("cls");
printmenu();
cout<< "Enter choice=";
cin>> choice;
}
    
}



void printmenu()
{
cout << " ************************************************ " << endl;
cout << " *                                              *" << endl;
cout << " *                                              * " << endl;
cout << " *          University Admission                *" << endl;
cout << " *            Mangement system                  *" << endl;
cout << " *                                              *" << endl;
cout << " ************************************************" << endl;
cout << " *                                              *" << endl;
cout << " *               UET LAHORE                     *" << endl;
cout << " ************************************************" << endl;
cout << "   "<< endl;
cout << "   "<< endl;
cout << "   "<< endl;
cout << "   "<< endl;
cout << "Press 1 to enter the details of first student!"<<endl;
cout<< "Press 2 to enter the details of second student!"<<endl;
cout<< "Press 3 to see the aggregate of first student!"<<endl;
cout<< "Press 4 to see the aggregate of second student!"<<endl;
cout<< "Press 5 to see roll no.1!"<< endl;
}
void aggregate1( float num1, float num2, float num3)
{

	 float agg1= (num1/1100)*30 + (num2/550)*30+ (num3/400)*40;
	cout<< " Aggregate of first student is=" << agg1 << endl;
}	
void aggregate2( float num4, float num5, float num6)
{

	 float agg2= (num4/1100)*30 + (num5/550)*30+ (num6/400)*40;
	cout<< " Aggregate of second student is=" << agg2 << endl;
}	
void compare(int num3, int num6, string name, string name1)
{
	if(num3 > num6)
      {
	cout << "ROLL NO.1 =" << name << endl;
	cout << "ROLL NO.2 =" << name1 << endl;
      }
	if(num3 < num6)
      {
	cout << " ROLL NO.1 = "<< name1 << endl;
	cout << "ROLL NO.2 =" << name << endl;
      }
}





