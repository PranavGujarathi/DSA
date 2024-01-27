// 2. Check if a number is power of 2 or not using for loop?

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number to check power of 2 or not :";
cin>>n;

bool vella=false;

while (n>1)
{
    if(n%2==1){
        cout<<"Not power of 2";
        vella=true;
        break;
    }
    n=n/2;
}

if(vella==false){
    cout<<"The number is Power of 2";
}

    return 0;

}
