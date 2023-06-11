#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
name();
return 0;
}
void name()
{
gotoxy(20,10);
cout<< "             ######             ##      ###############     #################      ################ " << endl;
gotoxy(20,11);
cout<< "             ##    ##           ##      ##            ##    ##             ##      ##              ##" << endl;
gotoxy(20,12);
cout<< "             ##     ##          ##      ##            ##    ##             ##      ##              ##" << endl;
gotoxy(20,13);
cout<< "             ##      ##         ##      ##            ##    ##             ##      ################" << endl;
gotoxy(20,14);
cout<< "             ##        ##       ##      ##            ##    ##             ##      ##  ##" << endl;
gotoxy(20,15);
cout<< "             ##         ##      ##      ##            ##    ##             ##      ##     ##" << endl;
gotoxy(20,16);
cout<< "             ##           ##    ##      ##            ##    ##             ##      ##        ##" << endl;
gotoxy(20,17);
cout<< "             ##             ######      ###############     #################      ##          ##" << endl;
}



void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


