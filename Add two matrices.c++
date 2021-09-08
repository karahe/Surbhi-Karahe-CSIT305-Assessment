/* Program Objective : Program to add two matrices using array */
#include <iostream>
using namespace std;
int main()
{
  int matrixA[3][3] , matrixB[3][3] ;
  int i, j;
  cout<<"Enter the elements of first matrix:"<<endl;
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
      cin>>matrixA[i][j];
  }
}
cout<<"First Matrix is:"<<endl;    
for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
      cout<<matrixA[i][j]<<" ";
  }
      cout<<endl;
}
  cout<<"Enter the elements of second matrix:"<<endl;
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
      cin>>matrixB[i][j];
  }
}
cout<<"Second Matrix is:"<<endl;    
for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
      cout<<matrixB[i][j]<<" ";
  }
      cout<<endl;
}
cout<<"Addition of matrices:"<<endl;
for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
      cout<<matrixA[i][j] + matrixB[i][j]<<" ";
  }
      cout<<endl;
}
return 0;
}
