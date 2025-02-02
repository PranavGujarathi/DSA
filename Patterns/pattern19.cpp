#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;

    int iniS = 0;

    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        iniS += 2;
        cout << endl;
    }

    iniS=8;
     for (int i = 1; i <=n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        iniS -= 2;
        cout << endl;
    }


    return 0;
}

// Enter value of n :5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********