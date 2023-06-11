#include <iostream>
using namespace std;
int checkword(char word, string p);
main()
{
    int size;
    char word;
    int count = 0;
    string p;
    int sum =0;
    cout << "Enter how many words you want to enter = ";
    cin >> size;
    string letters[size];

    for (int x = 0; x < size; x++)
    {
        cout << "enter the letters = ";
        cin >> letters[x];
    }
    cout << "Enter the letter you want to count = ";
    cin >> word;
    for (int x = 0; x < size; x++)
    {
        p = letters[x];
        sum = sum + checkword(word,p);
    }
    cout << sum;
}
int checkword(char word, string p)
{
    int count = 0;
        for (int x = 0; p[x] != '\0'; x++)
        {
            if (p[x] == word)
            {
                count++;
                // cout << count;
            }
        }
   return count;
}