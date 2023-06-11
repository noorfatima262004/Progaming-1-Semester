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

    int count = 0;

    for (int x = 0; letter[x] != '\0'; x++)
    {
        // cout << x << endl;
        count++;
        // cout << "count= " << count << endl;

        if (word == letter[count - 1])
            ispresent = true;
    }
    if (ispresent == true)
        cout << "The word is PRESENT   in  " << letter << endl;
    else
        cout << "The word is NOT PRESENT in " << letter << endl;
}