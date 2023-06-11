#include <iostream>
#include <fstream>
using namespace std;
// main()
// {
//     string alpha;
//     int n = 0;
//     fstream file;
//     file.open("my file.txt", ios::in);
//     while (!file.eof())
//     {
//         getline(file, alpha);
//         for (int x = 0; alpha[x] != '\0'; x++)
//         {
//             n++;
//         }
//     }
//     cout << "tha alphabets are = " << n;
//     file.close();
// }
main()
{
    int n =0;
    char alpha;
    fstream file;
    file.open("myfile.txt" , ios::in);
    while(!file.eof())
    {
        file >> alpha;
        n++;
    }
    file.close();
     cout << "the alpha are= " <<n;
}
