#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

// main functions
void Header();
string main_menu();
void Clear();
string menubeforeSubMenu(string menu);
void loading();

// functions for descision of options
void op_num1();
void op_num2();
void op_num1_1();

// admin variables;
string admin[1];
string admin_password[1];
int count_admin = 0;


// admin functions
string admin_menu();
void Manager();
void change_name();
void change_pass();
void change_pass_ad();
void change_name_ad();
void employeelist();
void attendence();
void add_employee();
void remove_employee();
string change_password_name_employee();
string change_password_name();
void assign_task();
string performance();
void all_perf();
void single_perf();
void pay();
string bonus_fine();
void bonus();
void fine();
void promotion();


// validation functions of admin
bool name_check(string name);
bool password_check(string password);
bool admin_SignUp(string name, string password);
bool admin_role(string role);
bool admin_SignIn(string name, string password);
int check_index_ad(string name, string password);
bool user_SignIn(string name, string password, string department, int rank);
bool salary(int n);

// user variables;
string names[100];
string passwords[100];
string roles[100];
string departments[100];
int Ranks[100];
string tasks[100];
string deadline[100];
int presents[100];
float rewards[100];
float fines[100];
int newranks[100];
int absents[100];
string recommendtions[100];
string performances[100];
float salarys[100];
float newsalarys[100];
float total[100];
string promote[100];
int totalday = 24;
int user_count = 0;

// user function
string user_menu();
void Employee();
void E_bonus();
void E_fine();
void E_promotion();
string E_change_password_name_employee();
void E_passwordchange();
void E_namechange();
void fine();
string total_salary();
void E_attendence();
void E_salary();
void E_tasks();
void E_performance();
void E_remove_account();
void E_full_status();
void username(int n);

// validations for user
bool dept_check(string dept);
bool check_rank(int rank);
bool user_role(string role);
int check_index(string name, string password);
bool sameusername(string newname);
bool sameuserpass(string newpassword);
bool checkB_F(string option);
bool checkB_F(string option);
bool notpromote(string option);
bool ispromote(string option);

// file handling
string getfield(string record, int field);
void loaddata();
void savedata();
void loaddata1();
void savedata1();


main()
{
    system("cls");
    loaddata();
    loaddata1();

    string option = " ";
    while (option != "3")
    {
        savedata();
        savedata1();
        string num1 = " ";
        string num = " ";
        Header();
        option = main_menu();
        if (option == "1")
        {
            while (num != "3")
            {
                savedata();
                savedata1();
                num = admin_menu();
                if (num == "1")
                {
                    op_num1();
                }
                else if (num == "2")
                {
                    op_num2();
                }
            }
        }
        if (option == "2")
        {
            while (num1 != "2")
            {
                savedata();
                savedata1();
                num1 = user_menu();
                if (num1 == "1")
                {
                    op_num1_1();
                }
            }
        }
    }

    Clear();
}

void Header()
{

    cout << "  _____                 _                         __  __                                                   _     ____            _                " << endl;
    cout << " | ____|_ __ ___  _ __ | | ___  _   _  ___  ___  |  \\/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  / ___| _   _ ___| |_ ___ _ __ ___  " << endl;
    cout << " |  _| | '_ ` _ \\| '_ \\| |/ _ \\| | | |/ _ \\/ _ \\ | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __| \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ " << endl;
    cout << " | |___| | | | | | |_) | | (_) | |_| |  __/  __/ | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ___) | |_| \\__ \\ ||  __/ | | | | |" << endl;
    cout << " |_____|_| |_| |_| .__/|_|\\___/ \\__, |\\___|\\___| |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |____/ \\__, |___/\\__\\___|_| |_| |_|" << endl;
    cout << "                 |_|            |___/                                      |___/                                       |___/                       " << endl;
    cout << endl;
    cout << endl;
    cout << "               <><><>---<>---<>---<>---<>---<>---<>---<>---<>---<>---<>----<>---<>---<>---<>---<>---<>----<>----<>---<><><>" << endl;
    cout << "               <><><>---<>---<>---<>---<>---<>---<>---< EMPLOYEE MANAGEMENT SYSTEM >---<>---<>---<>---<>---<>---<>---<><><>" << endl;
    cout << "               <><><>---<>---<>---<>---<>---<>---<>---<>---<>---<>---<>----<>---<>---<>---<>---<>---<>----<>----<>---<><><>" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void Clear() // to clear the screen;
{
    cout << "Press any key to continue = ";
    getch();
    system("cls");
}

// main page
string main_menu()
{

    system("cls");
    Header();
    string options;
    cout << "1 . Press 1 for admin login. " << endl;
    cout << "2. Press 2 for user login ." << endl;
    cout << "3 .Press 3 for exit  . " << endl;
    cin >> options;
    return options;
}
string user_menu()
{
    system("cls");
    Header();
    string option;
    cout << "1 . Press 1 to sign In ." << endl;
    cout << "2 . Press 2 to exit " << endl;
    cin >> option;
    return option;
}
string admin_menu()
{
    system("cls");
    Header();
    string option;
    cout << "1 . Press 1 to sign up . " << endl;
    cout << "2 . Press 2 to sign In ." << endl;
    cout << "3 . Press 3 to exit " << endl;
    cin >> option;
    return option;
}

// validation for admin
bool name_check(string name)
{
    bool flag = false;
    int i = 0;
    while (i < name.length())
    {
        if ((name[i] > 63 && name[i] < 91) || (name[i] > 96 && name[i] < 123))
        {
            i++;
            if (i >= 5)
            {
                flag = true;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}
bool password_check(string password)
{
    bool flag = false;
    int i = 0;
    while (i < password.length())
    {
        if ((password[i] > 63 && password[i] < 91) || (password[i] > 96 && password[i] < 123) || (password[i] > 47 && password[i] < 58) || (password[i] > 34 && password[i] < 39))
        {
            i++;
            if (i >= 8)
            {
                flag = true;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}
bool admin_SignUp(string name, string password)
{
    bool isCheck = false;
    for (int x = 0; x < count_admin; x++)
    {
        if (names[x] == name && passwords[x] == password)
            isCheck = true;
    }
    if (admin[0] == name && admin_password[0] == password)
    {
        isCheck = true;
    }
    if (isCheck == false)
    {
        if (count_admin == 0)
        {
            admin[0] = name;
            admin_password[0] = password;
            count_admin++;
        }
    }
    return isCheck;
}
bool admin_role(string role)
{
    bool flag = false;
    if (role == "manager")
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

    return flag;
}
bool admin_SignIn(string name, string password)
{
    bool flag = false;
    for (int x = 0; x <= 0; x++)
    {
        if (name == admin[x] && password == admin_password[x])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}
int check_index_ad(string name, string password)
{
    int n = -1;
    if (name == admin[0] && password == admin_password[0])
    {
        n = 0;
    }

    return n;
}
bool salary(int x)
{
    bool flag = false;
    if (x >= 100)
    {
        if (x <= 20000)
        {
            flag = true;
        }
    }
    else
    {
        flag = false;
    }
    return flag;
}

// validation for user
bool user_SignIn(string name, string password, string department, int rank)
{
    bool flag = false;
    for (int x = 0; x < user_count; x++)
    {
        if (name == names[x] && password == passwords[x] && rank == Ranks[x] && department == departments[x])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}
bool SignUp(string name, string password, string role, string department, int rank)
{
    bool isCheck = false;
    for (int x = 0; x < user_count; x++) // this function is called in admin functions of add_employee;
    {
        if (names[x] == name && passwords[x] == password)
            isCheck = true;
    }
    if (name == admin[0] || password == admin_password[0])
    {
        isCheck = true;
    }
    if (isCheck == false)
    {
        names[user_count] = name;
        passwords[user_count] = password;
        roles[user_count] = role;
        departments[user_count] = department;
        Ranks[user_count] = rank;
        newranks[user_count] = 0;
        performances[user_count] = "0";
        promote[user_count] = "0";
        presents[user_count] = 0;
        absents[user_count] = 0;
        salarys[user_count] = 0;
        newsalarys[user_count] = 0;
        fines[user_count] = 0;
        rewards[user_count] = 0;
        total[user_count] = 0;
        user_count++;
    }
    return isCheck;
}
bool dept_check(string dept)
{
    bool flag = false;
    int i = 0;
    while (i < dept.length())
    {
        if ((dept[i] > 63 && dept[i] < 91) || (dept[i] > 96 && dept[i] < 123))
        {
            i++;
            if (i >= 5)
            {
                flag = true;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}
bool check_rank(int rank)
{
    bool flag = false;

    if (rank >= 10 && rank <= 25)
    {
        flag = true;
    }
    else
    {
        flag = false;
        // break;
    }

    return flag;
}
bool user_role(string role)
{
    bool flag = false;
    if (role == "employee")
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

    return flag;
}
bool sameusername(string newname)
{
    bool ischeck = false;

    for (int x = 0; x < user_count; x++)
    {
        if (newname == names[x])
        {
            ischeck = true;
            break;
        }
        else
        {
            ischeck = false;
            continue;
        }
    }
    if (newname == admin[0])
    {
        ischeck = true;
    }
    return ischeck;
}
bool sameuserpass(string newpassword)
{
    bool ischeck = false;
    for (int x = 0; x < user_count; x++)
    {
        if (newpassword == passwords[x])
        {
            ischeck = true;
            break;
        }
        else
        {
            ischeck = false;
            continue;
        }
    }
    if (newpassword == passwords[0])
    {
        ischeck = true;
    }
    return ischeck;
}
int check_index(string name, string password)
{
    int n = -1;
    for (int x = 0; x < user_count; x++)
    {
        if (name == names[x] && password == passwords[x])
        {
            n = x;
            break;
        }
    }
    return n;
}
bool checkB_F(string option)
{
    bool flag = false;
    if (option == "yes")
    {
        flag = true;
    }
    return flag;
}
bool ispromote(string option)
{
    bool flag = false;
    if (option == "promoted")
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
}
bool notpromote(string option)
{
    bool flag = false;
    if (option == "not promoted")
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
}

// functions to decide option
void op_num1()
{
    string name;
    string password;
    string role;
    cout << "Enter your role(manager / employee) = " << endl;
    cin >> role;
    bool ischeck = admin_role(role);
    if (ischeck == true)
    {
        cout << "Enter you name = ";
        cin.ignore();
        getline(cin, name);
        bool check = name_check(name);
        if (check == true)
        {
            cout << "Enter your password = " << endl;
            cin >> password;
            bool valid = password_check(password);
            if (valid == true)
            {
                bool okay = admin_SignUp(name, password);
                if (okay == false)
                {
                    if (count_admin == 0)
                    {
                        loading();
                        cout << "YOUR ACCOUNT HAS BEEN CREATED . " << endl;
                    }
                    else
                    {
                        loading();
                        cout << "Only 1 admin is needed ." << endl;
                    }
                }
                else if (okay == true)
                {
                    loading();
                    cout << "This UserName or Password is Already Taken . " << endl;
                }
            }
            else if (valid == false)
            {
                cout << "Please choose a Strong password . That contain atleast 8 characters . " << endl;
            }
        }
        else if (check == false)
        {
            cout << "Please Choose a strong name of Minimum 8 characters . " << endl;
        }
    }
    else if (ischeck == false)
    {
        cout << "Please choose correct Role . " << endl;
    }
    Clear();
}
void op_num2()
{
    string name;
    string password;
    string role;
    cout << "Enter your name = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password = ";
    cin >> password;
    bool check = admin_SignIn(name, password);
    if (check == true)
    {
        loading();
        cout << "Welcome to admin interface . " << endl;
        Manager();
    }
    else if (check == false)
    {
        loading();
        cout << "Please Enter correct ID password . " << endl;
    }
    Clear();
}
void op_num1_1()
{
    string role;
    cout << "Enter your role(manager / employee) = " << endl;
    cin >> role;
   
    bool check = user_role(role);
    if (check == true)
    {
        loading();
        cout << "Welcome to interface of User . " << endl;
        Employee();
    }
    else if (check == false)
    {
        cout << "Please Enter Correct Id password . " << endl;
    }
    Clear();
}

// Functions of Manager
void Manager() // interface of manager;
{
    Sleep(1000);
    system("cls");
    Header();
    string option;
    string name, password, role, department;
    int rank;
    string op = " ", op1 = " ", op2 = " ";
    string op3 = "0";
    while (option != "12")
    {

        savedata();
        savedata1();
        cout << "                                           " << endl;
        cout << "------------------------------------------" << endl;
        cout << "WELCOME TO THE INTERFACE OF ADMIN :" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. To add new Employee." << endl;
        cout << "2. To see the employee list. " << endl;
        cout << "3. To see the attendance of Employ" << endl;
        cout << "4. To change  employee's name or password (In case of any misconduct) " << endl;
        cout << "5. To change  his name or password " << endl;
        cout << "6. To assign tasks to Employ ." << endl;
        cout << "7.  To see the employee performance" << endl;
        cout << "8. To remove Employ." << endl;
        cout << "9. To release pay of Employees. " << endl;
        cout << "10. To grant reward/bonus to Employ or he can deduct fine from the salary." << endl;
        cout << "11. To give promotion to the employee " << endl;
        cout << "12. To EXIT." << endl;
        cout << "Choose any options = " << endl;
        cout << "----------------------------------------------" << endl;
        cin >> option;
        if (option == "1")
        {

            add_employee();
        }
        if (option == "2")
        {
            employeelist();
        }
        if (option == "3")
        {
            attendence();
        }
        if (option == "4")
        {
            while (op != "3")
            {
                op = change_password_name_employee();
                if (op == "1")
                {
                    change_name();
                }
                if (op == "2")
                {
                    change_pass();
                }
            }
        }
        if (option == "5")
        {
            while (op1 != "3")
            {
                op1 = change_password_name();
                if (op1 == "1")
                {
                    change_name_ad();
                }
                if (op1 == "2")
                {
                    change_pass_ad();
                }
            }
        }
        if (option == "6")
        {
            assign_task();
        }
        if (option == "7")
        {
           while (op2 != "3")
            {
                op2 = performance();
                if (op2 == "1")
                {
                    single_perf();
                }
                if (op2 == "2")
                {
                    all_perf();
                }
            }
        }

        if (option == "8")
        {
            remove_employee();
        }
        if (option == "9")
        {
            pay();
        }
        if (option == "10")
         {
           
           //while (op3 != "3")
            // {
                op3 = bonus_fine();

                if (op3 == "1")
                {
                    bonus();
                }
                if (op3 == "2")
                {
                    fine();
                }
            // }
        }
        if (option == "11")
        {
            promotion();
        }
        Clear();
        Header();
    }

    // Header();
}

void add_employee() // here admin can add employees;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Add  Employee");
    string name, password, role, department;
    int rank;
    cout << "****  To Add  a epmloyee  *******" << endl;
    cout << "--------------------------------- " << endl;
    cout << "                                                   " << endl;
    cout << "Enter the role (Employee) = ";
    cin >> role;
    bool isrole = user_role(role);
    if (isrole == true)
    {
        cout << "Enter the name = ";
        cin.ignore();
        getline(cin, name);
        bool isname = name_check(name);
        if (isname == true)
        {
            cout << "Enter the departement = ";
            cin >> department;
            bool isdept = dept_check(department);
            if (isdept == true)
            {
                cout << "Enter the Rank = ";
                cin >> rank;
                bool isrank = check_rank(rank);
                if (isrank == true)
                {
                    cout << "Enter the password = ";
                    cin >> password;
                    bool valid = password_check(password);
                    if (valid == true)
                    {
                        bool isCheck = SignUp(name, password, role, department, rank);
                        if (isCheck == true)
                        {
                            loading();
                            cout << "Already Exit" << endl;
                        }
                        if (isCheck == false)
                        {
                            loading();
                            cout << "THE ID HAS BEEN CREATED ." << endl;
                        }
                    }
                    else if (valid == false)
                    {
                        cout << "Please Enter a strong password . " << endl;
                    }
                }
                else if (isrank == false)
                {
                    cout << "Please only Enter integer values of 2 digits. " << endl;
                }
            }
            else if (isdept == false)
            {
                cout << "Please Enter Correct Department That only contain alpabets greater then 4. " << endl;
            }
        }
        else if (isname == false)
        {
            cout << "Please Ener a Strong Name of minimum 9 characters without integers" << endl;
        }
    }
    else if (isrole == false)
    {
        cout << "Please Enter Correct role that is employee . " << endl;
    }
}
void employeelist() // here admin can thee employee list
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Employee List");
    cout << "**********   Employee list   ***********" << endl;
    cout << "----------------------------------------" << endl;
    cout << "                                         " << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "NAME                     =       " << names[x] << endl;
        cout << "ROLE                     =       " << roles[x] << endl;
        cout << " PASSWORDS                =       " << passwords[x] << endl;
        cout << "DEPT                     =       " << departments[x] << endl;
        if (promote[x] == "PROMOTED")
        {
            cout << "AFter Promotion RANK                     =      " << newranks[x] << endl;
        }
        else if (promote[x] != "PROMOTED")
        {
            cout << " RANK                     =      " << Ranks[x] << endl;
        }
        cout << "---------------------------------------" << endl;
        cout << "                                         " << endl;
    }
}
void attendence() // here admin can see the attendence marked by employees;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Employee Attendence");
    cout << "*********  Employee Attendence   **********" << endl;
    cout << "------------------------------------------ " << endl;
    cout << "                                                     " << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "NAME                     =       " << names[x] << endl;
        cout << "DEPT                     =       " << departments[x] << endl;
        cout << "PRESENT DAYS             =       " << presents[x] << endl;
        cout << "ABSENT DAYS              =       " << absents[x] << endl;
        cout << "------------------------------------------" << endl;
    }
}
string change_password_name_employee() // here admin can change password / name of employees ;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Change Name or Password of Employee");
    string option = " ";
    string name, password;
    int num = -1;
    cout << "**** Change password / name of employee  *****" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "1. Press 1 to change name.  " << endl;
    cout << "2. Press 2 to change password . " << endl;
    cout << "3. Press 3 to exit . " << endl;
    cin >> option;
    return option;
}
void change_name()
{

    string name, password;
    string newname;
    menubeforeSubMenu("Change Name");
    int num = -1;
    cout << "Enter the name of the employee  = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter the password of the employee = " << endl;
    cin >> password;
    cout << endl;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "Enter new username=";
        cin.ignore();
        getline(cin, newname);
        bool isvalid = name_check(newname);
        if (isvalid == true)
        {
            bool check = sameusername(newname);
            if (check == true)
            {
                loading();
                cout << "THE ID IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (check == false)
            {
                names[num] = newname;
                cout << "                 " << endl;
                loading();
                cout << "THE NAME HAS BEEN CHANGED . " << endl;
                cout << "--------------------------------------------" << endl;
            }
        }
        else if (isvalid == false)
        {
            cout << "Please Enter a valid name ." << endl;
        }
    }
    else if (num == -1)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
void change_pass()
{
    string newpassword;
    string name, password;
    int num = -1;
    cout << "Enter the name of the employee  = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter the password of the employee = " << endl;
    cin >> password;
    cout << endl;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "Enter new password=";
        cin.ignore();
        getline(cin, newpassword);
        bool isokay = password_check(newpassword);
        if (isokay == true)
        {
            bool check = sameuserpass(newpassword);
            if (check == true)
            {
                loading();
                cout << "THE PASSWORD IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (check == false)
            {
                passwords[num] = newpassword;
                cout << "                 " << endl;
                loading();
                cout << "THE PASSWORD HAS BEEN CHANGED . " << endl;
                cout << "--------------------------------------------" << endl;
            }
        }
        else if (isokay == false)
        {
            cout << "Please Enter A valid Password . " << endl;
        }
    }

    else if (num == -1)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
string change_password_name() // here admin can change his / herpassword and name ;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Change Name Or Password Of Employee.");
    string option = " ";
    string name, password;
    int num = -1;
    cout << "********   Change password / name   ********" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "1. Press 1 to change name.  " << endl;
    cout << "2. Press 2 to change password . " << endl;
    cout << "3. Press 3 to exit . " << endl;
    cin >> option;
    return option;
}
void change_name_ad()
{
    string newname;
    string name, password;
    int num = -1;
    cout << "Enter your name   = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = " << endl;
    cin >> password;
    cout << endl;
    num = check_index_ad(name, password);
    if (num == 0)
    {
        cout << endl;
        cout << "Name      = " << admin[num] << endl;
        cout << "Password  = " << admin_password[num] << endl;
        cout << endl;
        cout << endl;
        cout << "Enter new username=";
        cin.ignore();
        getline(cin, newname);
        bool isvalid = name_check(newname);
        if (isvalid == true)
        {
            bool check = sameusername(newname);
            if (check == true)
            {
                loading();
                cout << "THE ID IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (check == false)
            {
                admin[num] = newname;
                cout << "                 " << endl;
                loading();
                cout << "THE NAME HAS BEEN CHANGED . " << endl;
                cout << "--------------------------------------------" << endl;
            }
        }
        else if (isvalid == false)
        {
            cout << "Please Enter  a valid password ." << endl;
        }
    }
    else if (num != 0)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
void change_pass_ad()
{
    string newpassword;
    string name, password;
    int num = -1;
    cout << "Enter your name   = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password = " << endl;
    cin >> password;
    cout << endl;
    num = check_index_ad(name, password);
    if (num == 0)
    {
        cout << endl;
        cout << "Name      = " << admin[num] << endl;
        cout << "Passwords = " << admin_password[num] << endl;
        cout << endl;
        cout << "Enter new password=";
        cin.ignore();
        getline(cin, newpassword);
        bool valid = password_check(newpassword);
        if (valid == true)
        {
            bool check = sameuserpass(newpassword);
            if (check == true)
            {
                loading();
                cout << "THE PASSWORD IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (check == false)
            {
                admin_password[num] = newpassword;
                cout << "                 " << endl;
                loading();
                cout << "THE PASSWORD HAS BEEN CHANGED . " << endl;
                cout << "--------------------------------------------" << endl;
            }
        }
        else if (valid == false)
        {
            cout << "Please Enter a valid password." << endl;
        }
    }

    else if (num != 0)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
void assign_task() // here admin can assign tasks to the employees;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Assign Task to Employee");
    string name, password;
    int num = -1;
    cout << "**** To assign tasks to  employee  *****" << endl;
    cout << "----------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "Enter the username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the password = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "ASSIGN TASK TO THIS User = ";
        cin.ignore();
        getline(cin, tasks[num]);
        cout << "DEADLINE OF THIS TASK = ";
        cin.ignore();
        getline(cin, deadline[num]);
        cout << "-------------------------------------" << endl;
        loading();
        cout << "THE TASK HAS BEEN ASIGNED . " << endl;
    }
    else if (num == -1)
    {
        loading();
        cout << "User doesn't exsist." << endl;
    }
    Clear();
}
string performance() // here admin can see the performance of employees;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Performance of Employee");
    string option = " ";
    cout << "***** Perfomance of epmloyee *******" << endl;
    cout << "-------------------------------------- " << endl;
    cout << "                                        " << endl;
    cout << "1. Press 1 to see the performance to individual employee. " << endl;
    cout << "2 . Press 2 to see the performance of all employee . " << endl;
    cout << "3. Press 3 to exit . " << endl;
    cout << "-------------------------------------- " << endl;
    cout << endl;
    cin >> option;
    return option;
}
void all_perf()
{
    Sleep(500);
    cout << "*****  PERFORMANCE OF ALL EMPLOYEE  ******" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "NAME                     =       " << names[x] << endl;
        cout << "DEPT                     =       " << departments[x] << endl;
        cout << "RANK                     =       " << Ranks[x] << endl;
        cout << "PRESENT DAYS             =       " << presents[x] << endl;
        cout << "ABSENT DAYS              =       " << absents[x] << endl;
        cout << "TASKS                    =       " << tasks[x] << endl;
        cout << "PERFORMANCE              =       " << performances[x] << endl;
        cout << "------------------------------------------" << endl;
        cout << endl;
        Sleep(800);
    }
    Clear();
}
void single_perf()
{
    string name, password;
    Sleep(500);
    cout << "*****  PERFORMANCE OF ALL EMPLOYEE  ******" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Enter the name of Employee = ";
    cin >> name;
    cout << "Enter the Password of employee  = ";
    cin >> password;
    int num = check_index(name, password);
    if (num != -1)
    {
        loading();
        cout << "NAME                     =       " << names[num] << endl;
        cout << "DEPT                     =       " << departments[num] << endl;
        cout << "RANK                     =       " << Ranks[num] << endl;
        cout << "PRESENT DAYS             =       " << presents[num] << endl;
        cout << "ABSENT DAYS              =       " << absents[num] << endl;
        cout << "TASKS                    =       " << tasks[num] << endl;
        cout << "PERFORMANCE              =       " << performances[num] << endl;
        cout << "------------------------------------------" << endl;
        cout << endl;
    }
    else if (num == -1)
    {
        cout << "Please Enter he Correct Id and Pasword  " << endl;
    }
    Clear();
}
void remove_employee() // here admin can remove or delete the account of employee;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Remove Employee");
    int num = -1;
    string name, password, role, department;
    cout << "***** To remove a epmloyee *******" << endl;
    cout << "------------------------------------ " << endl;
    cout << "                                           " << endl;
    cout << "Enter the name of employee = ";
    cin >> name;
    cout << "Enter the password =";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        for (int x = num; x < user_count; x++)
        {
            names[x] = names[x + 1];
            passwords[x] = passwords[x + 1];
            departments[x] = departments[x + 1];
            Ranks[x] = Ranks[x + 1];
            tasks[x] = tasks[x + 1];
            deadline[x] = deadline[x + 1];
            presents[x] = presents[x + 1];
            absents[x] = absents[x + 1];
            rewards[x] = rewards[x + 1];
            fines[x] = fines[x + 1];
            absents[x] = absents[x + 1];
            performances[x] = performances[x + 1];
            salarys[x] = salarys[x + 1];
            total[x] = total[x + 1];
            promote[x] = promote[x + 1];
            user_count--;
        }
        cout << endl;
        loading();
        cout << "THIS ID OF EMPLOYEE HAS BEEN REMOVED. " << endl;
        cout << "--------------------------------------------" << endl;
    }
    if (num == -1)
    {
        cout << endl;
        cout << "THE USER DOESN'T EXIT . " << endl;
        cout << "--------------------------------------------" << endl;
    }
    Sleep(500);
    Clear();
    Header();
}
void pay() // here admin can release pay of employees;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Pay of Employee");
    cout << "***** Salary of epmloyee *******" << endl;
    cout << "----------------------------------- " << endl;
    cout << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "NAME          =      " << names[x] << endl;
        cout << "DEPT          =      " << departments[x] << endl;
        cout << "RANK          =      " << Ranks[x] << endl;
        cout << "--------------------------------------" << endl;
        cout << "SALARY        =        " << endl;
        cin >> salarys[x];
        cout << "--------------------------------------" << endl;
        cout << "                        " << endl;
        Sleep(800);
    }
}
string bonus_fine() // here admin can deduct fine or give bonus to the employee;
{
    Sleep(500);
    system("cls");
    string option;
    Header();
    menubeforeSubMenu("Bonus / Fine");
    cout << "*** Bonus / Fine for epmloyee ****" << endl;
    cout << "----------------------------------- " << endl;
    cout << "                                     " << endl;
    cout << "1. TO GIVE REWARD ." << endl;
    cout << "2. TO DEDUCT FINE ." << endl;
    cout << "3. to go back " << endl;
    cin >> option;
    return option;
}
void bonus()
{
    string option = " ";
    cout << "*****      BONUS     ********* " << endl;
    cout << "                       " << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "--------------------------------------------------------" << endl;
        cout << "NAME                     =      " << names[x] << endl;
        cout << "ROLE                     =      " << roles[x] << endl;
        cout << "DEPT                     =      " << departments[x] << endl;
        if (promote[x] == "PROMOTED")
        {
            cout << "RANK                     =      " << newranks[x] << endl;
        }
        if (promote[x] != "PROMOTED")
        {
            cout << "RANK                     =      " << Ranks[x] << endl;
        }
        cout << "PRESENT DAYS             =      " << presents[x] << endl;
        cout << "ABSENT DAYS              =      " << absents[x] << endl;
        cout << "TASKS                    =      " << tasks[x] << endl;
        cout << "PERFORMANCE              =      " << performances[x] << endl;
        if (salarys[x] != 0)
        {
            cout << "----------------------------------------" << endl;
            cout << "DO YOU WANT TO REWARD A BONUS (yes / no) " << endl;
            cin >> option;
            bool check = checkB_F(option);
            if (check == true)
            {
                cout << "---------------------------------------" << endl;
                cout << endl;
                cout << "Plwase ! Please ! only Enter Integer Values . " << endl;
                cout << endl;
                cout << "BY KEEPING IN VIEW THE PERFORMANCE OF EMPLYEE HOW MUCH REWARD YOU WANT TO GIVE = ";
                cin >> rewards[x];
                cout << endl;
                bool isokay = salary(rewards[x]);
                if (isokay == true)
                {
                    newsalarys[x] = salarys[x] + rewards[x];
                    loading();
                    cout << "THE FINAL SALARY OF EMEPLOYEE IS = " << newsalarys[x] << endl;
                    cout << "---------------------------------------" << endl;
                }
                else if (isokay == false)
                {
                    cout << endl;
                    cout << endl;
                    cout << "Please Enter value between 100 to 30000." << endl;
                    Sleep(500);
                    cout << endl;
                    cout << endl;
                }
            }
            else if (check == false)
            {
                loading();
                cout << endl;
                cout << " THE SALARY OF EMPLOYEE IS =  " << salarys[x] << endl;
                cout << "---------------------------------------" << endl;
            }
        }
        else
        {
            cout << "---------------------------------------" << endl;
            cout << endl;
            cout << "Your balance is zero." << endl;
            Sleep(500);
            cout << endl;
            cout << "---------------------------------------" << endl;
        }
    }
}
void fine()
{
    string option;
    cout << "*****      FINE    ********* " << endl;
    cout << "                       " << endl;
    for (int x = 0; x < user_count; x++)
    {

        cout << "NAME                     =      " << names[x] << endl;
        cout << "ROLE                     =      " << roles[x] << endl;
        cout << "DEPT                     =      " << departments[x] << endl;
        if (promote[x] == "PROMOTED")
        {
            cout << "RANK                     =      " << newranks[x] << endl;
        }
        if (promote[x] != "PROMOTED")
        {
            cout << "RANK                     =      " << Ranks[x] << endl;
        }
        cout << "PRESENT DAYS             =      " << presents[x] << endl;
        cout << "ABSENT DAYS              =       " << absents[x] << endl;
        cout << "TASKS                    =      " << tasks[x] << endl;
        cout << "PERFORMANCE              =      " << performances[x] << endl;
        cout << "----------------------------------------" << endl;
        if (salarys[x] != 0)
        {
            cout << "Note 100 pkr are deducted for 1 absent . " << endl;
            cout << endl;
            cout << "DO YOU WANT DEDUCT FINE (yes / no) " << endl;
            cin >> option;
            bool check = checkB_F(option);
            if (check == true)
            {
                cout << "---------------------------------------" << endl;
                cout << endl;
                total[x] = absents[x] * 100;
                newsalarys[x] = salarys[x] - total[x];
                cout << endl;
                loading();
                cout << "THE FINAL SALARY OF EMEPLOYEE IS = " << newsalarys[x] << endl;
                cout << "---- -----------------------------------" << endl;
            }

            if (check == false)
            {
                loading();
                cout << endl;
                cout << " THE SALARY OF EMPLOYEE IS =  " << salarys[x] << endl;
                cout << "---------------------------------------" << endl;
            }
        }
        else
        {
            cout << endl;
            cout << "Your balance is zero." << endl;
            Sleep(500);
            cout << endl;
            cout << "---------------------------------------" << endl;
        }
    }
}
void promotion() // here admin can give promotions to the employee;
{
    Sleep(500);
    system("cls");
    Header();
    menubeforeSubMenu("Promotion");
    string option;
    cout << "*****      Promotion     ******* " << endl;
    cout << "--------------------------------" << endl;
    cout << endl;
    for (int x = 0; x < user_count; x++)
    {
        cout << "NAME                     =      " << names[x] << endl;
        cout << "ROLE                     =      " << roles[x] << endl;
        cout << "DEPT                     =      " << departments[x] << endl;
        cout << "RANK                     =      " << Ranks[x] << endl;
        cout << "PRESENT DAYS             =      " << presents[x] << endl;
        cout << "ABSENT DAYS              =      " << absents[x] << endl;
        cout << "TASKS                    =      " << tasks[x] << endl;
        cout << "PERFORMANCE              =      " << performances[x] << endl;
        cout << "----------------------------------------" << endl;
        cout << "DO YOU WANT TO GIVE PROMOTION (yes / no) = " << endl;
        cin >> option;
        bool check = checkB_F(option);
        if (check == true)
        {
            cout << "---------------------------------------" << endl;
            cout << endl;
            cout << "Enter promoted to confirm = ";
            cin.ignore();
            getline(cin, promote[x]);
            bool ischeck = ispromote(promote[x]);
            if (ischeck == true)
            {
                newranks[x] = Ranks[x] + 1;
                cout << "Now your Rank is = " << newranks[x] << endl;
                cout << endl;
                loading();
                cout << "THE EMPLOYEE HAS BEEN GRANTED PROMOTION . " << endl;
                cout << "---------------------------------------" << endl;
            }
            else if (ischeck == false)
            {
                loading();
                cout << "Please Enter promoted to confirm . " << endl;
            }
        }
        if (check == false)
        {
            cout << "---------------------------------------" << endl;
            cout << endl;
            cout << "Enter not promoted to confirm = ";
            cin.ignore();
            getline(cin, promote[x]);
            bool isvalid = notpromote(promote[x]);
            if (isvalid == true)
            {
                cout << "Your Rank is = " << Ranks[x] << endl;
                cout << endl;
                loading();
                cout << "THE EMPLOYEE HASN'T BEEN GRANTED PROMOTION ." << endl;
                cout << "---------------------------------------" << endl;
            }
            else if (isvalid == false)
            {
                cout << "Please enter not promoted only . " << endl;
            }
        }
        Sleep(800);
    }
}

// employee interface
void Employee() // interface of employee
{
    Sleep(1000);
    system("cls");
    Header();
    string option;
    string op = " ", op1 = " ";
    while (option != "10")
    {
        savedata();
        savedata1();
        cout << "WELCOME TO THE INTERFACE OF USER (EMPLOYEE) :" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Choose any option = " << endl;
        cout << "1. To change password." << endl;
        cout << "2. To view his salary salary " << endl;
        cout << "3. To view his reward or deduction. " << endl;
        cout << "4. To mark his attendence." << endl;
        cout << "5. To see notification of promotion." << endl;
        cout << "6. To see tasks . " << endl;
        cout << "7. To submit the performance of task." << endl;
        cout << "8. To remove his / her account. " << endl;
        cout << "9. To see his full status." << endl;
        cout << "10. LOGOUT." << endl;
        cout << "----------------------------------------------" << endl;
        cin >> option;
        if (option == "1")
        {
            while (op != "3")
            {
                op = E_change_password_name_employee();
                if (op == "1")
                {
                    E_namechange();
                }
                if (op == "2")
                {

                    E_passwordchange();
                }
            }
        }
        if (option == "2")
        {
            E_salary();
        }
        if (option == "3")
        {

            while (op1 != "3")
            {
                op1 = total_salary();
                if (op1 == "1")
                {
                    E_bonus();
                }
                if (op1 == "2")
                {
                    E_fine();
                }
            }
        }
        if (option == "4")
        {
            E_attendence();
        }
        if (option == "5")
        {
            E_promotion();
        }
        if (option == "6")
        {
            E_tasks();
        }
        if (option == "7")
        {
            E_performance();
        }
        if (option == "8")
        {
            E_remove_account();
        }
        if (option == "9")
        {
            E_full_status();
        }
        Clear();
        Header();
    }
}

void username(int n)
{
    cout << endl;
    cout << "Your username = " << names[n] << endl;
    cout << "Your password  = " << passwords[n] << endl;
    cout << "Your department = " << departments[n] << endl;
    cout << "Your Rank = " << Ranks[n] << endl;
    cout << endl;
}
string E_change_password_name_employee() // here user can change his password / name  ;
{
    Sleep(500);
    system("cls");
    Header();
    string option = " ";
    string name, password;
    int num = -1;
    cout << "****        Change password / name      *****" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "1. Press 1 to change name.  " << endl;
    cout << "2. Press 2 to change password . " << endl;
    cout << "3. Press 3 to exit . " << endl;
    cin >> option;
    return option;
}
void E_passwordchange() // here employee can change his user name and password;s
{
    Sleep(500);
    system("cls");
    string name, password;
    string newpassword;
    string newname;
    int num = -1;
    int x;
    cout << "********      Change password  *******" << endl;
    cout << "----------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "Enter your name  = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password = " << endl;
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "Enter new password =";
        cin.ignore();
        getline(cin, newpassword);
        bool isokay = password_check(newpassword);
        if (isokay == true)
        {
            bool isvalid = sameuserpass(newpassword);
            if (isvalid == true)
            {
                cout << "THE ID IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (isvalid == false)
            {
                passwords[num] = newpassword;
                cout << "Your Password has been  changed . " << endl;
                cout << "--------------------------" << endl;
            }
        }
        else if (isokay == false)
        {
            cout << "Please Enter a valid password . " << endl;
        }
    }
    else if (num == -1)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
void E_namechange()
{
    string newname;
    string name, password;
    int num = -1;
    cout << "Enter your name   = " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = " << endl;
    cin >> password;
    cout << endl;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "Enter new username=";
        cin.ignore();
        getline(cin, newname);
        bool isokay = name_check(newname);
        if (isokay == true)
        {
            bool check = sameusername(newname);
            if (check == true)
            {
                cout << "THE ID IS ALREADY TAKEN . " << endl;
                cout << "--------------------------" << endl;
            }
            else if (check == false)
            {
                names[num] = newname;
                cout << "                 " << endl;
                cout << "THE NAME HAS BEEN CHANGED . " << endl;
                cout << "--------------------------------------------" << endl;
            }
        }
        else if (isokay == false)
        {
            cout << "Please Enter a Valid name . " << endl;
        }
    }
    else if (num != -1)
    {
        cout << "Please Enter correct ID and password. " << endl;
        cout << "-------------------------------------" << endl;
    }
    Clear();
}
void E_salary() // here employee can see his salary without fine and bonus;
{
    Sleep(500);
    system("cls");
    Header();
    int num = -1;
    string name, password, department;
    cout << "****       Salary        *****" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "Your salary is = " << salarys[num] << endl;
        cout << "---------------------------------" << endl;
        cout << endl;
    }
    else if (num == -1)
    {
        cout << endl;
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << endl;
    }
}
string total_salary() // here employee can view his deduction and bonus in salary and total salary after the fine or bonus;
{
    Sleep(500);
    system("cls");
    Header();
    string name, password;
    string option;
    while (option != "3")
    {
        cout << "*****  BONUS OR DEDUCTION IN SALARY    *****" << endl;
        cout << "------------------------------------------" << endl;
        cout << "                                         " << endl;
        cout << " 1. To check bonus = " << endl;
        cout << "2. To check deduction in  salary = " << endl;
        cout << "3. to go back " << endl;
        cin >> option;
        return option;
    }
}
void E_bonus() // here employee can check the bonus;
{
    int num = -1;
    string name, password, department;
    cout << "*****      BONUS     ********* " << endl;
    cout << "                       " << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "----------------------------------------" << endl;
        cout << "Your bonus is =  " << rewards[num] << endl;
        if (rewards[num] != 0)
        {
            cout << "After Bonus  " << rewards[num] << "   your salary is = " << newsalarys[num] << endl;
            cout << "----------------------------------------" << endl;
        }
        else
        {
            cout << "Your salary is = " << salarys[num] << endl;
            cout << "----------------------------------------" << endl;
        }
    }
    else if (num == -1)
    {
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }

    Clear();
}
void E_fine() // here employee can check how much fine is deducted;
{
    string name, password, department;
    int num = -1;
    cout << "*****     FINE     ********* " << endl;
    cout << "                       " << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);

        cout << "The fine deducted  is =  " << fines[num] << endl;
        if (fines[num] != 0)
        {
            cout << "After deduction of fine  " << fines[num] << "   your salary is = " << total[num] << endl;
            cout << "----------------------------------------" << endl;
        }
        else
        {
            cout << "Your salary is = " << salarys[num] << endl;
            cout << "----------------------------------------" << endl;
        }
    }

    else if (num == -1)
    {
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }
    Clear();
}
void E_attendence() // here employee can mark his attendence;
{
    Sleep(500);
    system("cls");
    Header();
    string name, password, department;
    int num = -1;
    int p = 0;
    cout << "*******    To mark attendence     *******" << endl;
    cout << "------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "NOTE = 1 is for present . " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Mark your attendence (1) = ";
        cin >> p;
        if (p == 1)
        {
            presents[num] = presents[num] + p;
            absents[num] = (totalday - presents[num]);
            cout << "Your attendence has been marked . " << endl;
            cout << "-----------------------------------------------" << endl;
        }
        else if (p < 1 || p > 1)
        {
            cout << "Please Enter again and read the note carefully ." << endl;
            cout << "-----------------------------------------------" << endl;
        }
    }
    else if (num == -1)
    {
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }
}
void E_promotion() // here employee can see if there is any promotion for him by admin;
{
    Sleep(500);
    system("cls");
    Header();
    string name, password, department;
    int num = -1;
    int p = 0;
    cout << "*******    To see promotion      *******" << endl;
    cout << "------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);

        cout << "Your Promotion status is available here   =   " << promote[num] << endl;
        cout << endl;
        if (promote[num] == "promoted")
        {
            cout << "CONGRATULATOIN ! YOU HAVE BEEN PROMOTED ." << endl;
            cout << endl;
            cout << "Now your new rank is = " << newranks[num] << endl;
            cout << "-------------------------------------" << endl;
        }
        else
        {
            cout << " YOU HASN'T BEEN GRANTED PROMOTION ." << endl;
            cout << endl;
            cout << "Your rank is = " << Ranks[num] << endl;
            cout << "-------------------------------------" << endl;
        }
    }
    if (num == -1)
    {
        cout << endl;
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }
}
void E_tasks() // here employee can see the tasks assigned to him;
{
    Sleep(500);
    system("cls");
    Header();
    string name, password, department;
    int p = 0;
    int num = -1;
    cout << "*******    To see assign tasks     *******" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "--------------------------------------------" << endl;
        cout << "The tasks assigned to you by admin are = " << tasks[num] << endl;
        cout << "The deadling of task   " << tasks[num] << "  is  = " << deadline[num] << endl;
        cout << endl;
        cout << "--------------------------------------------" << endl;
    }

    if (num == -1)
    {
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }
}
void E_performance() // here employee can submit his peformance of task
{
    Sleep(500);
    system("cls");
    Header();
    int num = -1;
    string name, password, department;
    cout << "*******   To submit performance   *******" << endl;
    cout << "------------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "------------------------------------------" << endl;
        cout << "NOTE = { Enter (done) if the task is complete || Enter (not done) if the task in not complete. " << endl;
        cout << "----------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "Submit your performance  of task = " << tasks[num] << " here = ";
        cin.ignore();
        getline(cin, performances[num]);
        if (performances[num] == "done" || performances[num] == "not done")
        {
            Sleep(500);
            cout << endl;
            cout << "Your Respone has been submitted . " << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        else
        {
            cout << "Please Enter Correct Response . " << endl;
        }
    }
    else if (num == -1)
    {
        cout << "Please Enter correct ID and password - " << endl;
        cout << "-------------------------------------" << endl;
        cout << "                                       " << endl;
    }
}
void E_remove_account() // here employee can remove his account;
{

    Sleep(500);
    system("cls");
    Header();
    string name, password, role, department;
    int num = -1;
    cout << "***** To remove account   *******" << endl;
    cout << "------------------------------------ " << endl;
    cout << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        username(num);
        cout << "This account wil be removed . " << endl;
        cout << "Press any key to continue . " << endl;
        getch();

        for (int x = num; x < user_count; x++)
        {
            names[x] = names[x + 1];
            passwords[x] = passwords[x + 1];
            roles[x] = roles[x + 1];
            departments[x] = departments[x + 1];
            Ranks[x] = Ranks[x + 1];
            tasks[x] = tasks[x + 1];
            deadline[x] = deadline[x + 1];
            presents[x] = presents[x + 1];
            absents[x] = absents[x + 1];
            rewards[x] = rewards[x + 1];
            fines[x] = fines[x + 1];
            absents[x] = absents[x + 1];
            performances[x] = performances[x + 1];
            salarys[x] = salarys[x + 1];
            total[x] = total[x + 1];
            promote[x] = promote[x + 1];
            user_count--;
        }
        cout << "                  " << endl;
        cout << "YOUR ID  HAS BEEN REMOVED. " << endl;
        cout << "--------------------------------------------" << endl;
    }
    if (num == -1)
    {
        cout << "Please Enter Correct Id and Password . " << endl;
    }
}
void E_full_status() // here employee can see his full information;
{
    Sleep(500);
    system("cls");
    Header();
    int num = -1;
    string name, password;
    cout << "*****     full status    ******* " << endl;
    cout << "--------------------------------" << endl;
    cout << endl;
    cout << "Enter your username = ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your password  = ";
    cin >> password;
    num = check_index(name, password);
    if (num != -1)
    {
        cout << "NAME                      =       " << name[num] << endl;
        cout << "PASSWORD                  =      " << passwords[num] << endl;
        cout << "DEPARTMENT                =      " << departments[num] << endl;
        cout << "PRESENT DAYS              =      " << presents[num] << endl;
        cout << "ABSENT DAYS               =      " << absents[num] << endl;
        cout << "BONUS                     =      " << rewards[num] << endl;
        cout << "FINE                      =      " << fines[num] << endl;
        cout << "REWARD                    =      " << rewards[num] << endl;
        if (fines[num] != 0)
        {
            cout << "AFTER FINE SALARY IS      =      " << total[num] << endl;
        }
        if (rewards[num] != 0)
        {
            cout << "AFTER BONUS SALARY IS     =      " << newsalarys[num] << endl;
        }
        if (fines[num] == 0 && rewards[num] == 0)
        {
            cout << "SALARY                    =      " << salarys[num] << endl;
        }
        cout << "Promotion                 =      " << promote[num] << endl;
        if (promote[num] == "promoted")
        {
            cout << "NEWRANK                   =       " << newranks[num] << endl;
        }
        if (promote[num] == "Not promoted")
        {
            cout << "RANK                      =       " << Ranks[num] << endl;
        }
        cout << "----------------------------------------" << endl;

        Sleep(800);
    }
}

// file handling
void savedata()
{
    fstream file;
    file.open("record.txt", ios::out);
    for (int x = 0; x < user_count; x++)
    {
        file << names[x] << ",";
        file << passwords[x] << ",";
        file << roles[x] << ",";
        file << departments[x] << ",";
        file << Ranks[x] << ",";
        file << tasks[x] << ",";
        file << deadline[x] << ",";
        file << presents[x] << ",";
        file << absents[x] << ",";
        file << performances[x] << ",";
        file << newranks[x] << ",";
        file << salarys[x] << ",";
        file << newsalarys[x] << ",";
        file << total[x] << ",";
        file << promote[x] << "," << endl;
    }
    file.close();
}
void loaddata()
{
    string record;
    int x = 0;
    fstream myfile;
    myfile.open("record.txt", ios::in);
    while (getline(myfile, record))
    {
        names[x] = getfield(record, 1);
        passwords[x] = getfield(record, 2);
        roles[x] = getfield(record, 3);
        departments[x] = getfield(record, 4);
        Ranks[x] = stoi(getfield(record, 5));
        tasks[x] = getfield(record, 6);
        deadline[x] = getfield(record, 7);
        presents[x] = stoi(getfield(record, 8));
        absents[x] = stoi(getfield(record, 9));
        performances[x] = getfield(record, 10);
        newranks[x] = stof(getfield(record, 11));
        salarys[x] = stof(getfield(record, 12));
        newsalarys[x] = stof(getfield(record, 13));
        total[x] = stof(getfield(record, 14));
        promote[x] = getfield(record, 15);
        x++;
    }
    user_count = x;
    myfile.close();
}
string getfield(string record, int field)
{
    int comacount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            comacount++;
        }
        else if (comacount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void loaddata1()
{
    string line;
    int x = 0;
    fstream file;
    file.open("admin.txt", ios::in);
    while (getline(file, line))
    {
        admin[x] = getfield(line, 1);
        admin_password[x] = getfield(line, 2);
        x++;
    }
    count_admin = x;
    file.close();
}
void savedata1()
{
    fstream file;
    file.open("admin.txt", ios::out);
    for (int x = 0; x < count_admin; x++)
    {
        file << admin[x] << ",";
        file << admin_password[x] << endl;
    }
    file.close();
}
string menubeforeSubMenu(string menu)
{
    string message = "Admin Interface >> " + menu;
    cout << endl;
    cout << message << endl;
    cout << "<><><>---<>---<>---<>---<>----<>---<><><>" << endl;
    cout << endl;
    return message;
}
void loading()
{
    char load = 178;
    cout << endl;
    cout << endl;
    cout << "  The function is processing , Please Wait ";
    for (int i = 0; i < 4; i++)
    {

        cout << load;
        Sleep(300);
    }
    cout << endl;
    cout << endl;
    cout << endl;
}
