// Problem 2: Hollow Right Triangle Star PaƩern
// Write a C++ program to print hollow right triangle star paƩern (*) paƩern of N rows.

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number of rows:";
cin>>n;

for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){

       if((i==1)||(i==n)||(j==1)||(j==n)){
        cout<<"*";
       }else if(i==j){
        cout<<"*";
       }else{
        cout<<" ";
       }


    }
    cout<<endl;
}

    return 0;
}


// Enter number of rows:5
// *
// **
// * *
// *  *
// *****

