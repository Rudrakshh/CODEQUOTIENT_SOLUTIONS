#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int countfreq(int arr[],int l)
{
  int max=0,ans;
  for(int i=0;i<l;i++)
  {
    int c=1;
    for(int j=i+1;j<l;j++)
    {
      if(arr[i]==arr[j])
      {
        c+=1;
      }
    }
    if(c>=max)
    {
      max=c;
      ans=arr[i];
    }
  }
  return ans;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int len,val;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
      cin>>val;
      arr[i]=val;
    }
    int ans=countfreq(arr,len);
    cout<<ans<<endl;
  }
   return 0;
}