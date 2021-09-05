/*  Program Objective : Program to Input a character and check whether it is in uppercase, lowercase, digit or 
symbol and convert it to uppercase to lower case and lowercase to uppercase*/
#include<iostream>
#include <cctype>
using namespace std;
int main()  {
char ch;
cout <<"\n Enter the character \t";
cin>>ch;
cout <<"\n";
if (isupper(ch)) {  
cout<<ch<<" is in UpperCase \n";
   ch=ch+32;
cout<< "Given character in LowerCase  "<<ch;
 }
else if(islower(ch))  {  
cout<<ch<<" is in LowerCase \n";
         ch=ch-32;
cout<< "Given character in UpperCase  "<<ch;
 }
else if (ch >= 48 && ch <= 57)
{  cout<<ch<< " is a Digit ";   }
else
cout<<ch<<" is a symbol";  
return 0; 
}
