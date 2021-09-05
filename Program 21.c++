/* Program to calculate the factorial of an integer*/
#include<iostream>
using namespace std;
int main()  {
int n; 
int x=1;
cin>>n;
while (n>0)
   { 
     x*=n;
     n--;   
   }
cout<<x<<"\n";  
return 0; 
}
