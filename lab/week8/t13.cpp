#include <iostream>
using namespace std;
main()
{
    int newword;
    char alphabets[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','a'};
    string word;
    cout << "Enter a word or line=";
    // cin >> word;
    getline(cin, word);

    for (int x = 0; word[x] != '\0'; x++)
    {
        for (int i = 0; i < 27; i++)
        {
            if (word[x] == alphabets[i])
            {
                newword = i + 1;
                 cout  << alphabets[newword] ;
            }
        }
    }
    // cout << "the new word is =" << alphabets[newword];
}