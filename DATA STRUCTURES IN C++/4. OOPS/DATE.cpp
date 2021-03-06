class Date
{
  // Write your code here
  private:
  int month,date;
  public:
  Date(int m, int d)
  {
    month=m;
    date=d;
  }
  int daysInMonth()
  {
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
      return 31;
    }
    else if(month==2)
    {
      return 28;
    }
    else
    {
      return 30;
    }
  }
  int getDay()
  {
    return date;
  }
  int getMonth()
  {
    return month;
  }
  void nextDay()
  {
    int a=daysInMonth();
    if(date<a)
    {
      date++;
    }
    else
    {
      if(month!=12)
      {
        month++;
        date=1;
      }
      else
      {
        month=1;
        date=1;
      }
    }
  }
  string toString()
  {
    string a="";
    string b=std::to_string(date);
    string c=std::to_string(month);
    a+=c;
    a+="/";
    a+=b;
    return a;
  }
  int absoluteDay()
  {
    int k=month;
    int sum=0;
    for(int i=2;i<=k;i++)
    {
      month=i-1;
      sum+=daysInMonth();
    }
    month=k;
    sum+=date;
    return sum;
  }
};
