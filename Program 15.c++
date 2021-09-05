/* Program Objective : Program for choice ‘+’, ‘-’, ‘*’, ‘/’, ‘%’ -> Addition, Subtraction, Multiplication, Division, Remainder */
#include<iostream>
using namespace std;
int main()  {
int a, b, o;
cout<<"Enter the two numbers\n";
cin>>a>>b;
cout<<"Enter the choice\n";
cout<<" 1 for Addition\n";
cout<<"2 for Subtraction\n";
cout<<"3 for Multiplication\n";
cout<<"4 for Division\n";
cout<<"5 for Remainder\n";
cin>>o;
switch(o){
case 1: 
cout<<"Addition of numbers \n"<<a+b;
 break;
case 2 :cout<<" Subtraction of numbers \n"<<a-b;
break;
case 3 :
cout<<"Multiplication of numbers \n"<<a*b;
break;
case 4 :
cout<<"Division of numbers \n"<<(double)a/b;
break;
case 5 : 
cout<<"Remainder of numbers \n"<<a%b;
 break;
default:
cout<<"You have not selected the proper choice\n";
break;
}
return 0; 
}
