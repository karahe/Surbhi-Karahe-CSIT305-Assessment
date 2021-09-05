/*  Program for Swapping of two numbers
with and without temporary variable*/
#include <iostream>
using  namespace std;
int main() {
int x, y;
cout<<"Enter two numbers";
cin>>x, y;
cout<<endl;
cout<<"Swapping with temporary variable"<<endl;
int temp;
cout<<"Before swapping"<<endl; 
cout<<"x = "<< x <<", y = "<< y<<endl; 
temp = x; 
x = y; 
y= temp; 
cout<<"\nAfter swapping"<<endl; 
cout<<"x = "<<x<< ", y= "<<y<<endl;
cout<<endl;
cout<<"Swapping without temporary variable"<<endl;
cout<<"Before swapping"<<endl;
cout<<"x = "<<x<<", y = "<<y<<endl;
x = x + y; 
y = x - y; 
x = x - y;
cout<<"\nAfter swapping"<<endl; 
cout<<"x = " <<x<< ", y = "<<y<<endl; 
return 0;
}
