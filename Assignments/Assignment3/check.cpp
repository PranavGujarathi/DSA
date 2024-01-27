// Problem 2
// Write a C++ program to input a character from user and check whether given character is alphabet,
// digit or special character.

#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the charector"<<endl;
    cin>>ch;

    if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"Charector is alphabet";
     }
     
     else if(ch>='0' && ch<='9'){
        cout<<"Charector is number";
     }
     
     else{
        cout<<"Charector is special charector";
    }

    return 0;
}