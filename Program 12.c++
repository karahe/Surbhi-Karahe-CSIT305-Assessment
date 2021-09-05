/* Program Objective : Program to Input a Year and Check whether it is Leap Year or not */
#include<iostream>
using namespace std;
int main()  {
int y;
cout <<"Enter the Year "; cin>>y; cout<<"\n";
if(((y%4==0)&&(y%100!=0))||(y%400)) 
{      cout<<" Year"<<y<<"is a leap year ";    }
else 
{      cout<<" Year"<<y<<"is not a leap year ";  }
return 0; 
}
