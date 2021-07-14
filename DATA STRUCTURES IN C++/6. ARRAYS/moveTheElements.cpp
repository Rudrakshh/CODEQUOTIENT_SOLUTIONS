void moveElements(int arr[], int n){ 
  // Write your code here
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(arr[j+1]>=0 && arr[j]<0)
      {
        int t=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=t;
      }
    }
  }
}