/* Program Objective : Program for find out the sum of digit and count the digit of a number */
#include<iostream>
using namespace std;
int main()  {
string N;
cin>>N;
int sum=0;
int l = N.length();
for (int i = 0; i < l; i++)
{     string m; 
       m =N.at(i);
       int x = stoi(m); 
       sum+=x;  
}
cout<<"Sum of digits : "<<sum<<"\n";
cout<<"Number of digits : "<<l<<"\n";
return 0; 
}
