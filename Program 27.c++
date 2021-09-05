/*  Write a function in C++ to generate the following Pyramid of stars”
   *
  ***
 *****
*******
*/  
#include <iostream>
using namespace std;
int main()
{
int n = 5;
int i = 0, j = 0, k = 0;
while (i < n) {
while (k <= n - i - 2) {
cout << " ";
k++;
}
k = 0;while (j < 2 * i - 1) {
cout << "*";
j++;
}
j = 0;
i++;
cout << endl;
}
return 0;
}
