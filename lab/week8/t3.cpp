#include <iostream>
using namespace std;
main()
{
    char word;
    string letter;
    bool ispresent = false;
    cout << "Enter a word=";
    cin >> word;
    cout << "Enter the letter =";
    cin >> letter;

    for (int x = 0; letter[x] != '\0'; x++)
    {
        if (word == letter[x])
            ispresent = true;
    }
    if (ispresent == true)
        cout << "The word is PRESENT in  " << letter << endl;
    else
        cout << "The word is NOT PRESENT in " << letter  << endl;
}