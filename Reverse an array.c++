/* Program Objective : Program to reverse an array elements entered by user. */
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}
cout<<"Reversed array"<<endl;
reverse (a, a+n) ;
for (int i = 0; i < n; i++)
{
    cout << a[i] <<endl;
}
return 0;
}
