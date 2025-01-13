#include <iostream>
using namespace std;

void pattern11(int n)
{
    int start = 1;

    // Outer loop for the no. of rows
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        // if odd, then the first 0 will be printed in that row.
        else
            start = 0;
        // We alternatively print 1's and 0's in each row by using
        // the inner for loop.
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}



int main()
{

    int n;
    cout << "Enter value of n :";
    cin >> n;

    // Pattern - 11: Binary Number Triangle Pattern
    pattern11(n);

    return 0;
}

 