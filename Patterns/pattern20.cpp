#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;

    int space = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;

        if (i < n)
            space -= 2;
        else
            space += 2;
    }

    return 0;
}
