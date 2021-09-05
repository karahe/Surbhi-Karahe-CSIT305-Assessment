/* Program Objective :  Program for Perform All Arithmetic Operations
(‘+’,’-“,’*’,’/’,’ %’)  */
#include<iostream>
using namespace std;
int main() { 
int a, b;
cout<<"Enter the two numbers \n"; cin>>a>>b;
cout<<"Addition of numbers \t"<<a+b<<"\n";
cout<<" Subtraction of numbers \t"<<a-b<<"\n";
cout<<"Multiplication of numbers \t"<<a*b<<"\n";
cout<<"Division of numbers\t"<<(double)a/b<<"\n";
cout<<"Remainder of numbers \t"<<a%b<<"\n";
return 0; 
}
