#include <iostream>
using namespace std;
main(){
float MB, bytes, bits, KB;
cout <<"value in bits:";
cin >> bits;
bytes = bits /8;
KB = bits/(1024*8);
MB = bits/(1024*1024*8);
cout << " value in bytes is:"<< bytes<< endl;
cout << " value in KB is:"<< KB<< endl;
cout << " value in MB is:"<< MB<< endl;
}
