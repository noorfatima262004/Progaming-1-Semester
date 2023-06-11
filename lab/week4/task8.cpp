#include <iostream>
using namespace std;
void printName(string name);
main(){
string name;
while (true){
 cout<< "enter your name:";
 cin>> name;
 printName(name);
}
}
void printName(string name){
cout <<"your name is:"<< name<< endl;
}