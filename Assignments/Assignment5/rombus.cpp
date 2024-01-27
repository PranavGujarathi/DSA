// Problem 4: Rhombus Star PaƩern
// Write a C++ program to print a rhombus star paƩern of N rows.


#include<iostream>
using namespace std;

int main(){


    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<" ";

        }
        for(int j=1;j<=n;j++){
            cout<<"*";

        }

    cout<<endl;
    }
    

    return 0;
}
