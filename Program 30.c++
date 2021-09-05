/* Program Objective : Program to find the sum and average of the given numbers using the while loop */
#include<iostream>
using namespace std;
int main()  {
int n;
cout<<"Enter the total numbers input";
cin>>n;
cout<<"\n";
double x=0;
int i=0;
while (i<n)
   { int num; 
     cin>>num;
     x+=num;
     i++;   
   }
cout<<"Sum of given numbers : "<<x<<"\n";  
x /=n;
cout<<"Average of given numbers : "<<x;  
return 0; 
}
