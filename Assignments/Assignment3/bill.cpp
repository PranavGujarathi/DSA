/*
Problem 5
Write a C++ program to input electricity unit charge and calculate the total electricity bill according
to the given condiƟon:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An addiƟonal surcharge of 20% is added to the bill.    */

#include <iostream>
using namespace std;
int main()
{
int unit;
float amt, total, GST;

cout<<"Enter consumed units: "<<endl;
cin>>unit;


if(unit <= 50)
{

amt = unit * 0.50;
}
else if(unit <= 150)
{
amt = 0.50*50 + ((unit-50) * 0.75);
}
else if(unit <= 250)
{
amt = ((0.50*50)+(0.75*100)) + ((unit-150) * 1.20);
}
else
{
amt = ((0.50*50)+(0.75*100)+(1.20*100)) + ((unit-250) * 1.50);
}



GST = amt * 0.20;
total = amt + GST;


cout<<"Electricity bill is = Rs."<<total;
return 0;


}

