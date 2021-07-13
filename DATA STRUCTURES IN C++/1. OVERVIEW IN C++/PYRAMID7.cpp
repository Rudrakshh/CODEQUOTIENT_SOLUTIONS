#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,n2;
  cin>>n;
  n2=1;
  for (int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<n2;
      n2+=1;
      if(j>i) //'i' represent rows and 'j' represent coloums 
             // so condition should be if col number >row number then only white spaces should be printed
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
   return 0;
}
