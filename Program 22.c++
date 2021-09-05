/*  Program Objective : Program for given number is prime or not*/
#include <iostream>
using  namespace std;
int main() 
{
int num;
cout <<"\n Enter the number \t";
cin>>num;
int x=1;
for(int i=2;  i<=num-1;   i++) {
if (num%i==0)
 {
x=0;
    }
          }
if(x==1)
cout <<"\n number is prime \t"<< num;
else
cout<<" \n number is not prime \t"<< num;
return 0;
   }
