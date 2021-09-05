/*  Program Objective : Program for convert seconds into minutes and hours*/
#include <iostream>
using  namespace std;
int main() 
{
double s;
cout<<"Enter the time in seconds "<<endl;
cin>>s;
s/=60;
cout<<"Time in minutes "<<s<<endl;
s/=60;
cout<<"Time in hours "<<s<<endl;
return 0;
   }
