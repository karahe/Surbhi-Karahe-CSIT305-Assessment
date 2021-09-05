/* Program Objective : Program for Solving Quadratic Equation */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()  {
int a, b, c, p, x1, x2;
cout<<"Quadratic equation is ax^2+bx+c=0 \n";
cout<<"Enter the values of a , b , c respectively \n"; cin>>a>>b>>c;
p=b/(2*a) ; 
x1= -p+sqrt(pow(p,2)-c/a); 
x2= -p-sqrt(pow(p,2)-c/a); 
cout<<"Roots of quadratic equation are :"<<
x1<<" , "<<x2;
return 0; 
}
