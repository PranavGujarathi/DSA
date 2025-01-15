#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :" ;
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        for (char ch='A'; ch <= 'A' +(n-i-1);ch++)
        {
            cout << ch << " ";
            
        }
        cout << endl;
    }

    return 0;
}

// Enter value of n :5
// A B C D E 
// A B C D 
// A B C 
// A B
// A