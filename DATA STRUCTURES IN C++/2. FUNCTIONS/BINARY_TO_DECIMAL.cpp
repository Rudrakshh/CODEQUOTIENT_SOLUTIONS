int binaryToDecimal(string binary){
  // Write your code here
  int sum=0;
  int power=binary.length()-1;
  for(int i=0;i<binary.length();i++)
  {
    if(binary[i]=='1')
    {
      sum+=pow(2,power);
    }
    power-=1;
  }
  return sum;
}
