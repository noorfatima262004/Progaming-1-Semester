#include <iostream>
using namespace std;
void displaydetails(int marks, string name, float aggregate, char section);

main(){
	int marks;
	string name;
        float aggregate;
	char section;
	cout << "enter your name:";
	cin >> name;
	cout << "enter your obtained marks";
	cin>> marks;
	cout << "enter your aggregate:";
	cin>> aggregate;
	cout<< "enter your section:";
	cin>> section;
	displaydetails(marks,name,aggregate,section);
}
void displaydetails(int marks, string name,float aggregate,char section){
	cout << "your name is:" << name << endl;
	cout << "your numbers are:"<< marks << endl;
	cout << " your aggregate is:" << aggregate <<endl;
//	cout << "your section is:" << section << endl;

}