#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
string names[100];
string passwords[100];
string role[100];
int count = 0;
void adduser(string name, string password);
void viewuser();
void storeuser(string name, string password);
void loaduser();
bool isvalid(string name, string password);
string signin(string name, string password);
main()
{
    system("cls");
    loaduser();
    string name;
    string password;
    string role;
    int option = 0;
    while (option != 4)
    {
        system("cls");
        cout << "Enter 1 to sign Up ." << endl;
        cout << "Enter 2 to Sign In ." << endl;
        cout << "Enter 3 to view user" << endl;
        cout << "Enter 4 to exit " << endl;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter your first name =";
            cin >> name;
            cout << "Enter your password  =";
            cin >> password;
            bool check = isvalid(name, password);
            if (check == true)
            {
                cout << " The ID has been aleady taken ";
                getch();
            }
            else
            {
                cout << "Your Id has been created .";
                adduser(name, password);
                storeuser(name, password);
                getch();
            }
        }
        if (option == 2)
        {
            cout << "Enter your first name =";
            cin >> name;
            cout << "Enter your password  =";
            cin >> password;
            string role = signin(name, password);
            if (role == "Admin")
            {
                cout << "Welome to Admin interface";
            }
            if (role == "student")
            {
                cout << "Student interface";
            }
            getch();
        }
        if (option == 3)
        {
            viewuser();
            getch();
        }
    }
}
string signin(string name, string password)
{
    string role;
    count++;
    if (names[0] == name && passwords[0] == password)
    {
        return role = "Admin";
    }
    for (int x = 1; x < count; x++)
    {
        if (names[x] == name && passwords[x] == password)
        {
            return role = "student";
        }
    }
}
void adduser(string name, string password)
{
    names[count] = name;
    passwords[count] = password;
    count++;
}
void viewuser()
{
    system("cls");
    for (int x = 0; x < count; x++)
    {
        cout << "name = " << names[x] << endl;
        cout << " password =  " << passwords[x] << endl;
    }
}
void storeuser(string name, string password)
{
    fstream file;
    file.open("data.txt", ios::app);
    file << name << endl;
    file << password << endl;
    file.close();
}
bool isvalid(string name, string password)
{
    bool flag = false;
    for (int x = 0; x < count; x++)
    {
        if (names[x] == name && passwords[x] == password)
        {
            flag = true;
        }
    }
    if (flag == false)
    {
        names[count] = name;
        passwords[count] = password;
        count++;
    }
    return flag;
}
void loaduser()
{
    string name;
    string password;
    fstream file;
    int n = 0;
    file.open("data.txt", ios::in);
    while (getline(file, name) && getline(file, password))
    {
        names[n] = name;
        passwords[n] = password;
        n++;
    }
    count = n;
    file.close();
}