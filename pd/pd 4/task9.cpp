#include <iostream>
using namespace std;
void reverse(string nam1);
main(){
  string nam1;
  cout<< "Enter true or fasle:";
  cin>> nam1;
 
reverse(nam1);
}
void reverse(string nam1)
{
   if (nam1 == "true")
	{
          cout << "FALSE" << endl;
	}
   if (nam1 == "false")
	{
          cout << "TRUE" << endl;
	}
}
