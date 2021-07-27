int getMissingElement(int* a,int a_size,int* b ,int b_size){
  // Write your code here
  int ans;
  for(int i=0;i<=b_size;i++)
  {
    int c=true;
    for(int j=0;j<b_size;j++)
    {
      if(a[i]==b[j])
      {
        c=false;
      }
    }
    if(c==true)
    {
      ans=a[i];
      break;
    }
  }
  return ans;
}
