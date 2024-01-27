// 5. Write a C++ program to generate the Fibonacci sequence up to the Nth term, where each
// term is the sum of the two preceding terms. However, only print the Fibonacci numbers that
// are prime. Implement this using a for loop.

#include <iostream>
using namespace std;

bool prime(int num){

    if(num<2){
        return false;
    }

for(int i=2;i<=num/2;++i)

{
  if(num%i==0){
    return false;
  }

}

return true;

}


int main() {

int num1=0,num2=1,sum=0;

int N;
cout<<"Enter value of n:"<<endl;
cin>>N;

cout<<"The series is=";

for(int i=2 ; i<=N ; ++i){
    if(prime(num1)){
        cout<<num1<<" ";
    }
    sum=num1+num2;
    num1=num2;
    num2=sum;
   
}
    return 0;

}
