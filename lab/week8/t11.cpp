#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter a word=";
    getline(cin, word);

    for (int x = 0; word[x] != '\0'; x++)
    {
        if (word[x] == 'a' || word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u')
        {

            continue;
        }
        else
            cout << word[x];
    }
}