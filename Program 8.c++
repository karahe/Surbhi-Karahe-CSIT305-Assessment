/* Program Objective : Program for Calculating area, Diagonal and Perimeter of Rectangle */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()  {
int a, b;
double A, P, D;
cout<<"Enter the length and breadth of rectangle \n"; cin>>a>>b; cout<<"\n";
A=a*b;
cout<<"Area of rectangle"<< A; cout<<"\n";
P=2*(a+b);
cout<<"Perimeter of rectangle"<< P; cout<<"\n";
D=sqrt(pow(a, 2)+pow(b, 2));
cout<<"Diagonal of rectangle"<< D;
return 0; 
}
