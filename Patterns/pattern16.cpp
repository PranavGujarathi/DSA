#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' +i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        
    }

    return 0;
}
 
// Enter value of n :5
// A 
// B B
// C C C
// D D D D
// E E E E E