#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int line = 0;
    string name;
    fstream file;
    file.open("name.txt", ios::in);
    while (!file.eof())
    {
        getline(file, name);
        line++;
    }
    cout << line;
    file.close();
}