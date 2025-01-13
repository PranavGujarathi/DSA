#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World !" << endl;
    ;
    int x, y;
    cout << "Eneter value of x and y";
    cin >> x >> y;
    cout << "Value of x and y: " << x << y;

    // if else

    int age = 10;

    if (age >= 18)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are not an adult." << endl;
    }

    // if else ladder

    int marks = 54;

    if (marks < 25)
    {
        cout << "Grade: F" << endl;
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "Grade: E" << endl;
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60 && marks <= 69)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: A" << endl;
    }
    else
    {
        cout << "Invalid marks entered." << endl;
    }

    // switch case
    // Duplicate case, not allowed

    int day = 2;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }

    // example 2

    char grade = 'A';

    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        break;
    default:
        cout << "Not specified." << endl;
    }

    // for loops

    //     break;  Exit the loop immediately
    //     Using 'continue' to skip specific elements

    for (int i = 0; i <= 10; i++)
    {
        cout << "Hello : " << i << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "i = " << i << ", j = " << j << endl;
            // Nested loop code
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Thsi is even number:" << i << endl;
        }
        else
        {
            cout << "this is odd number :" << i << endl;
        }
    }
    // cutumize loop (meri marzhi )
    for (int i = 1; i <= 25; i += 5)
    {
        cout << "i = " << i << endl;
    }

    // Output:

    // i = 1
    // i = 6
    // i = 11
    // i = 16
    // i = 21

    // while loop

    // while (condition) {
    //     // body of the loop
    // }

    int n = 5;
    int factorial = 1;

    while (n > 0)
    {
        factorial *= n;
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;

    return 0;
}
