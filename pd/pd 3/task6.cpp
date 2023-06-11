#include <iostream>
using namespace std;
main(){
float bagsize,bagcost, area, ferperpound, ferpersquarefeet;
cout << "size of bag in pounds:";
cin >> bagsize;
cout << "cost of bag:";
cin >> bagcost;
cout << "write the area covered by each bag in square feet:";
cin >> area;
ferperpound= bagcost/bagsize;
ferpersquarefeet= bagsize * area;
cout << "cost of fertilizer per pound is:"<< ferperpound << endl;
cout << " cost of fertilizing the area per square feet is:" << ferpersquarefeet<< endl;
}