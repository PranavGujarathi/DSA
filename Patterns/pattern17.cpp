#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if(j<= breakPoint) ch++;
            else ch--;
        }
        cout << endl;
    }

    return 0;
}

// Enter value of n :5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA