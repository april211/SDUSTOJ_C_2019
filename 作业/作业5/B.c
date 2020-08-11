#include <stdio.h>
int gcd(int x, int y)
{
    int yushu,max,min;
      if(x!=0 && y!=0)
  {
        if(x>=y)
      {
         max=x;
         min=y;
      }
        else
      {
         max=y;
         min=x;
      }

        while(1)
    {

       yushu=max%min;
       if(yushu==0) break;
       max=min;
       min=yushu;

    }
    return min;
  }
   else
    {
       if(x>=y)
      {
         max=x;
         min=y;
      }
        else
      {
         max=y;
         min=x;
      }
        return max;
    }


}
int lcm(int x, int y)
{
    int s,yushu,max,min;

  if(x!=0 && y!=0)
  {
        if(x>=y)
      {
         max=x;
         min=y;
      }
        else
      {
         max=y;
         min=x;
      }

        while(1)
    {

       yushu=max%min;
       if(yushu==0) break;
       max=min;
       min=yushu;

    }
       s=(x*y)/min;
      return s;
  }
  else
    {
      return 0;

    }


}
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
