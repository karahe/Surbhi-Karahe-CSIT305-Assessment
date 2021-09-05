/* Program Objective : Program for Display Reverse of a number and show a reverse number is palindrome or not */
#include<iostream>
using namespace std;
int main()  {
int n, num, r, a=0;
cout<<"Enter the number" ; 
cin>>n;
cout<<"\n";
num=n;
while (n>0) 
{
r=n%10;
a=(a*10) +r;
n=n/10;
}
cout<<"Reverse of given number : "<<a<<"\n";
if(num==a) 
{    
cout<<"Number is palindrome";
}
else 
{    
cout<<"Number is not palindrome";
}
return 0; 
}
