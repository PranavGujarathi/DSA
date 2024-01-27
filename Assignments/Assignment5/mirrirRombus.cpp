// Problem 5: Mirrored Rhombus Star PaƩern
// Write a C++ program to print the inverted/mirrored rhombus star paƩern of N rows.

#include<iostream>
using namespace std;

int main(){


int n;
cout<<"Enter number of rows:";
cin>>n;

for(int i;i<n;i++){

    for(int j=1;j<i;j++){
        cout<<" ";
    }

    for(int j=1;j<=n;j++){
        cout<<"*";
    }

    cout<<endl;
}


    return 0;
}
