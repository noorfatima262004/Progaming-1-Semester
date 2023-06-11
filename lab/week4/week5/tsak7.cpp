#include <iostream>
#include <cmath>
using namespace std;
string compare(char alp);

 main()
{
	char alp;
	cout << " Enter a Alphabet=";
	cin >> alp;
	string result=compare(alp);
	cout << result << endl;
}

string compare(char alp)
{	

	if ( alp == 'a')
   {
	cout << " YOU HAVE ENTERED SMALL a"<< endl;
    }
	if ( alp == 'A')
   {
	cout << " YOU HAVE ENTERED CAPITAL A"<< endl;
   }
    return 0;
}

     