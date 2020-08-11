#include <stdio.h>
int main()
 {
   int x,a,b,c,d,y;
  scanf("%d",&x);
   y=100-x;
   a=y/20;
   b=(y-a*20)/10;
   c=(y-a*20-b*10)/5;
   d=y-a*20-b*10-c*5;

  printf("$20 bills: %d\n",a);
  printf("$10 bills: %d\n",b);
  printf(" $5 bills: %d\n",c);
  printf(" $1 bills: %d",d);



  return 0;
  }

