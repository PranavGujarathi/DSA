// 4. Print first n numbers that have digit sum equal to k.

#include<iostream>
using namespace std;

int main(){

int n,k;

cout<<"Enter the value of n and k :";
cin>>n>>k;

int i=1;
int count=0;

while(count<n){

    int sum=0;

    for(int num =i;num>0;num/=10){
        sum= sum+ (num%10);
    }

    if(sum==k){
        cout<<"The sum of "<<i<<" is "<<sum<<endl;
        count++;
    }
    i++;

}

    return 0;
}
