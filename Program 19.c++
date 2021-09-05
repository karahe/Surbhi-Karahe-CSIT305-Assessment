/* Program Objective : Program for input choice from user for calculating the Area, Perimeter and Diagonal of rectangle and 
display it on to the screen according to user’s response*/
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()  {
int a, b,o;
double A, P, D;
cout<<"Enter the length and breadth of rectangle \n"; cin>>a>>b; cout<<"\n";
cout<<"Enter the choice \n"; 
cout<<" 1 for Area of rectangle\n";
cout<<"2 for Perimeter of rectangle\n";
cout<<"3 for Diagonal of rectangle\n";
cin>>o;
switch(o){
case 1 :
A=a*b;
cout<<"Area of rectangle"<< A; cout<<"\n";
break;
case 2 :
P=2*(a+b);
cout<<"Perimeter of rectangle"<< P; cout<<"\n";
break;
case 3 : 
D=sqrt(pow(a, 2)+pow(b, 2));
cout<<"Diagonal of rectangle"<< D;
 break;
default:
cout<<"You have not selected the proper choice\n";
break;
}
return 0; 
}
