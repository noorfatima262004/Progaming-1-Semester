#include <iostream>
using namespace std;
main(){
string name;
int A_ticket, C_ticket, A_ticketsold, C_ticketsold,totalAticket, totalCticket,total;
float percentage, totalafterdonation, perdonation;
cout << "enter movie name:";
cin>> name;
cout << "Enter adult ticket price:";
cin>> A_ticket;
cout << "Enter child ticket price:";
cin>> C_ticket;
cout<< "Number of adult ticket sold:";
cin>> A_ticketsold;
cout<< " number of child ticket sold:";
cin>> C_ticketsold;
cout << "enter the percentage u want to donate:";
cin>>perdonation;
totalAticket= A_ticket* A_ticketsold;
totalCticket= C_ticket* C_ticketsold;
total= totalAticket + totalCticket;
percentage= (total * perdonation);
totalafterdonation=percentage-total;
cout << "total ammount is:"<< total << endl;
cout<< "amount after donation is:" << totalafterdonation<< endl;
}



