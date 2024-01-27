// Problem 3: Hollow Square Star PaƩern with Diagonal
// Write a C++ program to print a hollow square star paƩern with diagonals.

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number of values(n):";
cin>>n;

for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){

        if((i==1)||(i==n)||(j==1)||(j==n)){

            cout<<"*";

        }else if((i==j)||(i+j==6)){

             cout<<"*";

        }else{
             cout<<" ";
        }


    }
    cout<<endl;
}


    return 0;
}
