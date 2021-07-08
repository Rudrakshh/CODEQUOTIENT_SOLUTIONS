#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void primeFactors(int n){
  // Write your code here
  int left=n;
  for(int i=2;i<=n;i++)
  {
    while(left%i==0)
    {
      cout<<i<<endl;
      left=left/i;
    }
  }
}
