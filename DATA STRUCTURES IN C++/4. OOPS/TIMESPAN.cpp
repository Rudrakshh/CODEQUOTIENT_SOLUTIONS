class TimeSpan
{
  private:
  int hrs;
  int min;
  public:
  TimeSpan(int hours,int minutes)
  {
    hrs=hours;
    min=minutes;
  }
  int getHours()
  {
    return hrs;
  }
  int getMinutes()
  {
    return min;
  }
  void add(int hours,int minutes)
  {
    hrs+=hours;
    min+=minutes;
    if(min>60)
    {
      hrs+=1;
      min-=60;
    }
  }
  void add(TimeSpan tp){
    hrs+=tp.hrs;
    min+=tp.min;
    if(min>60)
    {
      hrs+=1;
      min-=60;
    }
  }
  double getTotalHours()
  {
    double a=min/60.0;
    return hrs+a;
  }
   string toString()
   {
     string a="";
     string b=std::to_string(hrs);
     string c=std::to_string(min);
     a+=b;
     a+=" Hours, ";
     a+=c;
     a+=" Minutes";
     return a;
   }
};
