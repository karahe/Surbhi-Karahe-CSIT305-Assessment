/* Program Objective : Sort an array element in ascending and descending order. */
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
cout<<"Array elements in acescending order"<<endl;
sort(a, a+n);
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<endl;
}
cout<<"Array elements in descending order"<<endl;
for (int i = n-1; i >= 0; i--)
{
    cout<<a[i]<<endl;
}
return 0;
}
