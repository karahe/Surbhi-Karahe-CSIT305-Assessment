/* Program Objective : Program for Bitwise Logical Operators, Increment Operators and Ternary Operators */
#include<iostream>
using namespace std;
int main() 
{  
 int a=2, b=3; 
cout << "a =2 " << endl;
 cout << "b = 3" << endl;
cout<<"Bitwise AND Operator\n";
 cout << "a & b = " << (a & b) << endl; 
cout<<"Bitwise OR Operator\n";
cout << "a | b = " << (a | b) << endl; 
cout<<"Bitwise XOR Operator\n";
cout << "a ^ b = " << (a ^ b) << endl; 
cout<<"Bitwise Complement Operator\n";
cout << "~a = " << (~a) << endl; 
cout<<"Bitwise Shift Left Operator\n";
cout << "a << 1 = " << (a << 1) << endl;
cout<<"Bitwise Shift Right Operator\n";
cout << "a >> 1 = " << (a >> 1) << endl;
cout<<"Logical And Operator\n";
cout <<"(0&&0)="<<(0&&0)<< endl;
cout <<"(0&&1)="<<(0&&1)<< endl; 
cout <<"(1&&0)="<<(1&&0)<< endl;
 cout <<"(1&&1)="<<(1&&1)<< endl;
cout<<"Logical OR Operator\n";
cout <<"(0||0)="<<(0||0)<< endl;
cout <<"(0||1)="<<(0||1)<< endl; 
cout <<"(1||0)="<<(1||0)<< endl;
cout <<"(1||1)="<<(1||1)<< endl;
cout<<"Logical NOT Operator\n";
cout << "!0="<<!0<< endl;
cout << "!1="<<!1<< endl;
cout<<"Increment Operator\n";
cout<<"++a="<<++a<<endl;
cout<<"Decrement Operator\n";
cout<<"--b="<<--b<<endl;
cout<<"Ternary Operator\n";
int y;
y=((a>1)?1:0);
cout<<"((a>1)?1:0)="<<y;
return 0;
}
