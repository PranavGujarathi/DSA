#include <iostream>
using namespace std;


// in coding ninja
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' + n - 1; ch >= 'A' + n - 1 - i; ch--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }

    cout<<"In coding ninja quetion"<<endl;

    pattern18(n);

    return 0;
}

// Enter value of n :5
// E
// DE
// CDE
// BCDE
// ABCDE


