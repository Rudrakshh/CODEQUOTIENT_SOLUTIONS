#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int amount;
  cin>>amount;
  int pending=amount;
  int notes[9]={2000, 500, 100, 50, 20, 10, 5, 2, 1};
  int number[9]={0,0,0,0,0,0,0,0,0};
  for(int i=0;i<9;i++)
  {
    while(notes[i]<=pending)
    {
      number[i]+=1;
      pending-=notes[i];
    }
  }
  for(int i=0;i<9;i++)
  {
    cout<<number[i]<<" ";
  }
   return 0;
}
