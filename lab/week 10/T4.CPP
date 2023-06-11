#include <iostream>
using namespace std;
main()
{
  string line;
  string p = "";
  cout << "Enter the line = ";
  getline(cin, line);
  int lengths = line.length();

  for (int x = lengths; x >= 0; x--)
  {
    if (line[x] != ' ' || line[x] == line[0])
    {
      p = p + line[x];
    }
    if (line[x] == ' ' || line[x] == line[0])
    {
      for (int y = p.length(); y >= 0; y--)
      {
        cout << p[y];
      }
    cout << "\t";
    p = "";
    }
  }
}
// for (int x = 0; line[x] != '\0'; x++)
// {

//   // for (int x = '\0' ; p[x] >= 0 ; x--)
//   // {
//   //   cout << p[x];
//   // }
//