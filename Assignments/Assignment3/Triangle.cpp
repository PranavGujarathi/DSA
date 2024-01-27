// Problem 4
// Write a C++ program to input sides of a triangle and check whether a triangle is equilateral,
// scalene or isosceles triangle.


#include <iostream>
using namespace std;
int main(){
int s1, s2, s3;


cout<<"Enter three sides of triangle: "<<endl;
cin>>s1>>s2>>s3;


if(s1==s2 && s2==s3) {
cout<<"Equilateral triangle"; // s1=10 s2=10 s3=10
}


else if(s1==s2 || s1==s3 || s2==s3) {
cout<<"Isosceles triangle";   // s1=10 s2=10 s3=20
}


else {
cout<<"Scalene triangle"; 
}

return 0;

}

