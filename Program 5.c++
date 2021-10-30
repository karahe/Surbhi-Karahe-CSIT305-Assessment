/* Program Objective : Program for Simple Interest and Compound Interest */
#include <bits/stdc++.h>
using namespace std;
int main()  {
double p, r, n , Si , Co;
cout <<"Enter amount :"; cin>>p; cout <<"\n";
cout <<"Enter annual rate percentage :"; cin>>r; cout <<"\n";
cout <<"Enter duration in years:"; cin>>n; cout <<"\n";
Si=p*r*n;
Si /=100;
cout<<"Simple Interest is  :  "<<Si<<"\n";
Co= p*pow((1+r/100) , n);
cout<<"Compound Interest is  :  "<<Co;
return 0; 
}
