#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string name;
  //  getline(cin , name);
    fstream file;
   // file.open("name.txt", ios::out);
    file.open("name.txt", ios::in);
    getline(file , name);
    file.close();
    cout << "name :" << name;
}