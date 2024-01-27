// Problem 1
// Write a C++ program to find maximum between three numbers.

#include <iostream>
using namespace std;
int main(){
int num1, num2, num3, max;

cout<<"Enter three numbers: "<<endl;
cin>>num1>>num2>>num3;
if((num1 > num2) && (num1 > num3)){
max = num1; 
}
else if(num2 > num3){
max = num2; 
}
else{
max = num3; 
}

cout<<"maximum number is = "<< max;
return 0;
}
