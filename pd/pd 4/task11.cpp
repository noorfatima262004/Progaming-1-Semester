#include <iostream>
using namespace std;
void car(int speed);
main(){
int speed;
	cout << " Enter the speed of car:";
	cin >> speed;
car(speed);
}
void car(int speed )
{
 if (speed == 100)
{
	cout << "PERFECT" << endl;
}
 if (speed > 100)
{
	cout << " HALT.... YOU WILL BE CHALLENGED";
}
}


