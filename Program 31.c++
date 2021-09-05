/*  Program Objective : Program for generate prime number series*/
#include <iostream>
using  namespace std;
int main() 
{
int n;
cout <<"\n Enter the number\t";
cin>>n;
for(int num=2; num<=n; num++) 
{
int x=1;
for(int i=2;  i<=num-1;   i++) {
if (num%i==0)
 {
x=0;
    }
          }
if(x==1)
cout << num;
}
return 0;
   }
