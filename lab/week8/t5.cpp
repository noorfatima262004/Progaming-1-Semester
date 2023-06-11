#include <iostream>
using namespace std;
main()
{
    string word;
    int count = -1;
    cout << "Enter a word=";
    cin >> word;
    for(int x =0 ; word[x]!= '\0' ; x++ )
    {
        count++;
    }
     for(int x = count ; word[x] >= 1 ; x-- )
     {
        cout << word[x];
     }
}