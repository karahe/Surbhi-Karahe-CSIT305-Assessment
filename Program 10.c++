/* Program Objective : Program for input three number and find the greatest element using Simple if, Nested 
if………else, if…..else if……..if Statement */
#include<iostream>
using namespace std;
int main()  {
int a, b, c;
cout<<"Enter three numbers \n"; cin>>a>>b>>c;
if((a>=b) &&(a>=c)||(a==c)) 
{       cout<<"Greatest number is :\n"<<a; }
else if((b>a) &&(b>c)||(a==b)||(b==c)) 
{       cout<<"Greatest number is\n"<<b; }
else
 {       cout<<"Greatest number is\n"<<c; }
return 0; 
}
