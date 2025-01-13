#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patter3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }

        // For printing the spaces after the stars in each row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {

            cout << "*";
        }

        // For printing the spaces after the stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern9(int n)
{
    /*
    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }

        // For printing the spaces after the stars in each row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {

            cout << "*";
        }

        // For printing the spaces after the stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    */
   pattern7(n);
   pattern8(n);
}

void pattern10(int n){

for(int i=1;i<2*n-1;i++){
    int stars=i;
    if (i>n) stars=2*n-i;

    for(int j=1;j<=stars;j++){
        cout<<"*";
    }
    cout<<endl;
}

}


int main()
{
    int n;
    cout << "Enter value of n :";
    cin >> n;

    //  Rectangular Star Pattern
    // pattern1(n);

    // Right-Angled Triangle Pattern
    // pattern2(n);

    //  Right-Angled number Pyramid
    // patter3(n);

    //  Right-Angled number Pyramid - II
    // pattern4(n);

    //  Inverted Right Pyramid
    // pattern5(n);

    // Inverted numbered Right Pyramid
    // pattern6(n);

    // Star Pyramid
    // pattern7(n);

    //  Inverted Star Pyramid
    // pattern8(n);

    //  Diamond Star Pattern
    // pattern9(n);

    // Pattern - 10: Half Diamond Star Pattern
    pattern10(n);



    return 0;
}
