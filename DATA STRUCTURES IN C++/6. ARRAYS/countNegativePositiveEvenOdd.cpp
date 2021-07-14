#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  // Write your code here
  int arr[10],value;
  int p=0,n=0,e=0,o=0;
  for(int i=0;i<10;i++)
  {
    cin>>value;
    arr[i]=value;
  }
  for(int i=0;i<10;i++)
  {
    if(arr[i]>0)
    {
      p+=1;
    }
    else
    {
      n+=1;
    }
    if(arr[i]%2==0)
    {
      e+=1;
    }
    else
    {
      o+=1;
    }
  }
  cout<<p<<endl;
  cout<<n<<endl;
  cout<<e<<endl;
  cout<<o<<endl;
  return 0;
}