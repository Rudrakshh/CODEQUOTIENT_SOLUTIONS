#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int find(int len,int n)
{
  int arr[len];
  for(int i=0;i<len;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<len;i++)
  {
    if(arr[i]==n)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int t;
  cin>>t;
  for (int i=0;i<t;i++)
  {
    int len,n;
    cin>>len>>n;
    cout<<find(len,n)<<endl;;
  }
   return 0;
}
