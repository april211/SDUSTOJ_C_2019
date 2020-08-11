#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
   if(a>=b)
  {d=a;
   e=b;}
   else
  {d=b;
   e=a;}
   if(d<=c)
  {f=c;
   printf("%d %d %d",e,d,f);}
   else
  {
      if(c>=e)
     {f=c;
      printf("%d %d %d",e,f,d);}
      else
     {f=c;
      printf("%d %d %d",f,e,d);}

  }




   return 0;
}
