#include <stdio.h>
int main()
{    int x;
     double y;
     scanf("%d",&x);
     scanf("%lg",&y);
     if (x>0)
        {printf("%d\n",x);}
     if (x<=0)
        {printf("%d\n",-x);}
     if (y>0)
        {printf("%lg",y);}
     if (y<0)
        {printf("%lg",-y);}
         return 0;
}
