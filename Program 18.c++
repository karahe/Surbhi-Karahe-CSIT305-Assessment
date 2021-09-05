/*  Program Objective : Program for finding the given number is odd or even and first number is divisible by second using 
Switch Case Statement*/
#include<iostream>
using namespace std;
int main()  {
int ch, t, s;
cout<<" Enter the choice\n";
cout<<" 1  for finding number is odd or even \n";
cout<<" 2 for finding first number is divisible by second or not \n";
cin>>ch; cout<<"\n";
switch(ch) 
{
case 1:
cout<<" Enter the number";
cin>>t;
cout<<"\n";
((t%2==0)? cout<<t<<"is even":cout<<t<<"is odd");
/* if(t%2==0) {
cout<"Number is even";
}
else {
cout<"Number is odd";
}*/
break;
case 2:
cout<<" Enter the first number";
cin>>t;
cout<<" Enter the second number";
cin>>s;
cout<<"\n";
((t%s==0)? cout<<t<<"is divisible by"<<s: cout<<t<<"is not divisible by"<<s);
/*if(t%s==0) {
cout<"First number is divisible by second number";
}
else {
cout<"First number is not divisible by second number";
} */
break;
default:
cout<<" You have not selected the proper choice";
}
return 0; 
}
