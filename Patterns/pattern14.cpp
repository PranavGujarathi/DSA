#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :" ;
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        for (char ch='A'; ch <= 'A'+i;ch++)
        {
            cout << ch << " ";
            
        }
        cout << endl;
    }

    return 0;
}

// Enter value of n :5
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 