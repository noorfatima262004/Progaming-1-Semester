#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;
string fname[100];
string lname[100];
string rollno[100];
float cgpa[100];
int count = 0;
void addstu(string firstname, string lastnmae, string rollNO, float Cgpa);
void viewstu();
void storestu(string firstname, string lastnmae, string rollNO, float Cgpa);
void load();

main()
{

    system("cls");
    load();
    string firstname;
    string lastname;
    string rollNO;
    float Cgpa;
    int option = 0;
    while (option != 3)
    {
        system("cls");
        cout << "Enter 1 to add  a student ." << endl;
        cout << "Enter 2 to view a student ." << endl;
        cout << "Enter 3 to exit " << endl;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter your first name =";
            cin >> firstname;
            cout << "Enter yoour last name =";
            cin >> lastname;
            cout << "Enter your roll NO = ";
            cin >> rollNO;
            cout << "Enter your CGPA = ";
            cin >> Cgpa;
            addstu(firstname, lastname, rollNO, Cgpa);
            storestu(firstname, lastname, rollNO, Cgpa);
        }
        if (option == 2)
        {
            viewstu();
            getch();
        }
    }
}
void addstu(string firstname, string lastnmae, string rollNO, float Cgpa)
{
    count++;
    for (int x = 0; x < count; x++)
    {
        fname[x] = firstname;
        lname[x] = lastnmae;
        rollno[x] = rollNO;
        cgpa[x] = Cgpa;
    }
    cout << count << endl;
}
void storestu(string firstname, string lastnmae, string rollNO, float Cgpa)
{
    fstream file;
    file.open("student.txt", ios::app);
    file << firstname << endl;
    file << lastnmae << endl;
    file << rollNO << endl;
    file << Cgpa << endl;
    file.close();
}

void viewstu()
{
    system("cls");
    //cout << "name " << endl;
    for (int x = 0; x < count; x++)
    {
        cout << "First name " << fname[x] << endl;
        cout << "Last name  " << lname[x] << endl;
        cout << "Roll NO" << rollno[x] << endl;
        cout << "CGPA " << cgpa[x] << endl;
    }
}
void load()
{
    string firstname;
    string lastname;
    string rollNO;
    float extra;
    int n = 0;
    string Cgpa;
    fstream file;
    file.open("student.txt", ios::in);
    //while (!file.eof())
     while(getline(file , firstname) && getline(file ,lastname) && getline(file , rollNO) && getline (file , Cgpa))
    {
        fname[n] = firstname;
        lname[n] = lastname;
        rollno[n] = rollNO;
        cgpa[n] = stof(Cgpa);
        n++;
    }
    count = n;
    file.close();
}