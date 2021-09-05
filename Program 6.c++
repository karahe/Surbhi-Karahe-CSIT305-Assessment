/* Program Objective : Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to 
Celsius */
#include<iostream>
using namespace std;
int main()  {
int ch;
double t, val;
cout<<" Enter the choice for conversion\n";
cout<<" 1 for Celsius to Fahrenheit \n";
cout<<" 2 for Fahrenheit to Celsius  \n";
cin>>ch; cout<<"\n";
switch(ch) 
{
case 1:
cout<<" Enter the temperature value";
cin>>t;
cout<<"\n";
val=1.8*t+32;
cout<<" Temperature in Fahrenheit"<<val;
break;
case 2:
cout<<" Enter the temperature value";
cin>>t;
cout<<"\n";
val=(t-32) /1.8;
cout<<" Temperature in Celsius"<<val;
break;
default:
cout<<" You have not selected the proper choice";
}
return 0; 
}
