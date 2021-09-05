/*  Program Objective : Program to calculating the total amount of money earned in n day*/
#include <iostream>
using  namespace std;
int main() 
{
int n;
int total, r;
cout<<"Enter number of days worked: ";
cin>>n; cout<<"\n";
cout<<"Enter the rate of per day: ";
cin>>r; cout<<"\n";
total = n * r;
cout<<"\n";
cout<<"\nFor "<<n<<" days of work, you have earned ";
cout<<total<<endl;
return 0;
   }
