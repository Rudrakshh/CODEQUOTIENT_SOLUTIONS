#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    // Write your code here
  int arr[5];
  int val;
  int max=-234546;
  for (int i=0;i<5;i++)
  {
    cin>>val;
    arr[i]=val;
  }
  for(int i=0;i<5;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  for(int i=0;i<5;i++)
  {
    if(arr[i]==max)
    {
      arr[i]=-387584;
    }
  }
  max=-234536;
  for(int i=0;i<5;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  int pos=0;
   int c=arr[0];
  bool ans=true;
  for(int i=0;i<5;i++)
  {
    if(arr[i]!=c)
    {
      ans=false;
    }
  }
  if(ans==true)
  {
    max=0;
  }
  cout<<max;
    return 0;
}