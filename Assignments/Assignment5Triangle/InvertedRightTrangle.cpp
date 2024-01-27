// Problem 5: Inverted Right Triangle Star PaƩern
// Write a C++ program to print inverted right triangle star paƩern (*) paƩern of N rows.


#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number of rows : ";
cin>>n;

for(int i=n;i>=1;i--){

    for(int j=i;j>=1;j--){

        cout<<"*";

    }
    cout<<endl;
}





    return 0;
}


// Enter number of rows : 5
// *****
// ****
// ***
// **
// *

