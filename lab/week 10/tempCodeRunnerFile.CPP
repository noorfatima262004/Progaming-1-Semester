#include <iostream>
using namespace std;
main()
{
  int size;
  string line[size];
  string p = " ";
  cout << "Enter the line = ";
  getline(cin, line[size]);
  int length = line[size].length();

  for (int x = length; x <= 0; x--)
  {
    if (line[x] != " " || line[x] == line[0])
    {
      p = p + line[x];
    }
    if (line[x] == " " || line[x] == line[0])
    {
      for (int x = size; x <= 0; x++)

      {
        p = p + line[x];
        cout << p << endl;
      }
    }
    cout << "\t";
    p = " ";
  }
}
// for (int x = 0; line[x] != '\0'; x++)
// {

//   // for (int x = '\0' ; p[x] >= 0 ; x--)
//   // {
//   //   cout << p[x];
//   // }
//