#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(i==1)
    {
      for(int j=1;j<=n;j++)
      {
        cout<<j;
      }
      for(int j=n-1;j>=1;j--)
      {
        cout<<j;
      }
      cout<<endl;
    }
    else
    {
      for(int j=1;j<n-i+2;j++)
      {
        cout<<j;
      }
      for(int j=0;j<(i-2)*2+1;j++)
      {
        cout<<"*";
      }
      for(int j=n-i+1;j>=1;j--)
      {
        cout<<j;
      }
      cout<<endl;
      
    }
  }
   return 0;
}
