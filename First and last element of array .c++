/* Program Objective : Display the first and last element of array */
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
cout<<"First element : "<<a[0]<<endl;
cout<<"Second element : "<<a[n-1]<<endl;
return 0;
}
