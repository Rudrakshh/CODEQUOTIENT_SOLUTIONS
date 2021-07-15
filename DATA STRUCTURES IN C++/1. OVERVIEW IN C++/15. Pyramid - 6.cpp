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
    for(int j=i;j>=1;j--)
    {
      cout<<j;
    }
    
    for(int k=2;k<=i;k++)
    {
      cout<<k;
    }
    cout<<endl;
  }
   return 0;
}
