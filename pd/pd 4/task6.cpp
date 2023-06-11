#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void name1();
void name2();
void name3();
void name4();
main()
{
 system ("cls");

 name1();
 name2();
 name3();
 name4();
}
void name1()
{ 
cout<< "             ######             ##      " << endl;
cout<< "             ##    ##           ##      " << endl;
cout<< "             ##     ##          ##      " << endl;
cout<< "             ##      ##         ##     " << endl;
cout<< "             ##        ##       ##      " << endl;
cout<< "             ##         ##      ##      " << endl;
cout<< "             ##           ##    ##       "<< endl;
cout<< "             ##             ######       "<<endl;
cout<< "  " << endl;
cout<< " "<< endl;
 
}
void name2()
{ 
cout<< "              ################# " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              #################   " << endl;
cout<< "  " << endl;
cout<< " "<< endl;

}
void name3()
{ 

cout<< "              ################# " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              ##             ##  " << endl;
cout<< "              #################   " << endl;
cout<< "  " << endl;
cout<< " "<< endl;
}
void name4()
{ 
cout<< "                ################ " << endl;
cout<< "                ##              ##" << endl;
cout<< "                ##              ##" << endl;
cout<< "                ################" << endl;
cout<< "                ##  ##" << endl;
cout<< "                ##     ##" << endl;
cout<< "                ##        ##" << endl;
cout<< "                ##          ##" << endl;
cout<< "  " << endl;
cout<< " "<< endl;
}


void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}