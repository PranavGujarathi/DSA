#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n :" ;
    cin >> n;

    int number=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}


// Enter value of n :5
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15