#include <iostream>
using namespace std;
void add(int num1, int num2);

main(){
 int num1, num2;
 cin >> num1 >> num2;

 add(num1, num2);
 add (20 ,40);

}
void add(int num1, int num2){
	int sum= num1 +num2;
	cout << "sum is:" << sum << endl;
}