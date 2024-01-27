// 1. Given a value of N and K, print all the numbers from 1 to N that have sum of digits equal to K.

#include<iostream>
using namespace std;

int main(){


int n,k;

cout<<"Enter the value of n and k :";
cin>>n>>k;

for(int i=1;i<=n;i++){
    int sum=0;

    for(int num =i;num>0;num/=10){
        sum= sum+ (num%10);
    }

    if(sum==k){
        cout<<"The sum of "<<i<<" is "<<sum<<endl;
    }

}
    return 0;
}


