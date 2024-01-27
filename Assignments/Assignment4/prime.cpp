// 3. Check if a given number is prime or not using for loop?

#include <iostream>
using namespace std;

int main() {

int num;

cout<<"Enter number to check prime or not :";
cin>>num;

if(num<=1){
    cout<<"Not a prome number";

}else{

    bool vella=true;

    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            vella=false;
            break;
        }

    }

if(vella==true){
    cout<<"It is a prime number";
}else{
    cout<<"Not a prime number";
}

}

    return 0;
}
