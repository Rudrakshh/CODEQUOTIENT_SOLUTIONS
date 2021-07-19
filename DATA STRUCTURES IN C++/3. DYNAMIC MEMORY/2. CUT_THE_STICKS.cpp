/*
 * Complete the function below with 3 arguments: 
 * Size of the array (lengths_size).
 * An integer array of stick lengths (lengths). 
 * Pointer to the variable which is used to store the size of the result array.
 * 
 */
int* cutSticks(int lengths_size, int *lengths, int *result_size) {
  // Write your code here
  int m=0;
  int *ans;
  ans=(int*)malloc(sizeof(int)*lengths_size);
  for(int i=1;i<=lengths_size;i++)
  {
    int count=0;
    int min=23456;
    bool b=true;
    for(int j=0;j<lengths_size;j++)
    {
      if(lengths[j]!=0)
      {
        b=false;
      }
    }
    if(b==true)
    {
      break;
    }
    for(int j=0;j<lengths_size;j++)
    {
      if(lengths[j]<min && lengths[j]>=1)
      {
        min=lengths[j];
      }
    }
    for(int j=0;j<lengths_size;j++)
    {
      if(lengths[j]>0)
      {
        lengths[j]-=min;
        count+=1;
      }
    }
    ans[m]=count;
    m++;
  }
*result_size=m;
return ans;
}
