#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int , int);
void printmaze();
void move(int x, int y);
main()
{
system("cls");
int x= 3;
int y=3;
printmaze();
while(true)
{
move(x,y);
if(x < 10)
{
   x=x+1;
}
if(x==10)
{
  gotoxy(x-1,y);
  cout<< "  ";
  x=3;
}
}
}
void printmaze()
{
cout << "***************************************"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "*                                     *"<< endl;
cout << "***************************************"<< endl;
}
void move(int x, int y)
{
	gotoxy(x-1,y);
	cout<< "  ";
	gotoxy(x,y);
	cout<< "P";
	Sleep(200);

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


