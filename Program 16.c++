/*  Program Objective : Program for Mark sheet Calculations (total, percentage and result) using ternary operator*/
#include<iostream>
using namespace std;
int main()  {
int n;
int t=0; int MM=0;
cout<<"Enter the Number of Subjects :\t"<<n; cin>>n; cout<<"\n";
cout <<"Enter the marks of each Subject\t"; cout<<"\n";
for(int i=0; i<n; i++) 
{  
int m, o; 
cout<<"Marks :"; cin>>m; cout<<"\t"; cout<<"out of :"; cin>>o;cout<<"\n";
t+=m; MM+=o;
}
cout<<"Total Marks :"<<t<<"\t out of :"<<MM<<"\n";
double p;
p=t*100;
p/=MM;
cout<<"Percentage :"<<p<<"\n";
cout<<"Result :";
( p>=50 ? cout<<"Pass" : cout<<"Fail" ) ;
return 0; 
}
