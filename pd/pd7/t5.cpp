#include <iostream>
using namespace std;
void hospital(int patients, int days);
main()
{
    int patients;
    int days;

    cout << "Enter the days for calculations= ";
    cin >> days;
    hospital(patients, days);
}
void hospital(int patients, int days)
{
    int treatedpat = 0, untreatedpat = 0;
    int doc = 7;
    for (int x = 1; x <= days; x++)
    {

        cout << "Enter the number of patients=";
        cin >> patients;

        if (patients <= doc)
        {
            treatedpat = patients + treatedpat;
        }
        if (days % 3 == 0 && (patients > doc))
        {

            doc = doc + 1;
        }
        if (patients > doc)
        {
            treatedpat = treatedpat + doc;
            untreatedpat = untreatedpat + (patients - doc);
        }
        
    }
    cout << "TREATED PATIENTS=" << treatedpat << endl;
    cout << "UNTREATED PATIENTS=" << untreatedpat << endl;
}