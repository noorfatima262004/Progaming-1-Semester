#include <iostream>
using namespace std;
main()
{
    string word;
    int count =0;
    cout << "enter a word=";
    cin >>word;
    for(int x =0 ; word[x]!= '\0' ; x++)
    {
        if(word[x] == 'a'|| word[x] == 'e'|| word[x] == 'i'|| word[x] == 'o'|| word[x] == 'u')
        {
            count++;
        }
    }
        cout << count;
}