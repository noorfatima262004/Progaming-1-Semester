#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter the word=";
    cin >> word;
    
    for(int x = 0 ; word[x]!='\0' ; x++)
    {
        cout << "The letter at position " << x+1 << "   is =" << word[x] << endl; 
        
    }
}