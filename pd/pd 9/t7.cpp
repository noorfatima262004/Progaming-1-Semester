#include <iostream>
using namespace std;
main()
{

    string word1;
    string word2;
    int count = 0;
    cout << "Enter the first word=";
    cin >> word1;
    cout << "Enter the second word=";
    cin >> word2;

    for (int x = 0; word1[x] != '\0'; x++)
    {
        // int compare = word1[x];
        for (int i = 0; word2[i] != '\0'; i++)
        {
            if (word1[x] == word2[i])
            {
                word2[i]='*';
                count++;
                break;
            }
        }
    }
    cout << count << endl;
}