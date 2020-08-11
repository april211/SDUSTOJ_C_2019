#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int j,a,b,k,d,e;
    int high,low;
    double step,i;
    char x[] = "C->F";
    char y[] = "F->C";
    char c[7];
    scanf("%s",c);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&step);
    if(a>=b)
    {
        high=a;
        low=b;
    }
    else
        {
          high=b;
          low=a;

        }

      if(strcmp(c,x)==0)
     {
        printf("   C  ->    F\n");
        for(i=low;i<=high;i=i+step)
        {
            if(abs(i)>=100.0){printf("%5.1lf ->%6.1lf\n",i,((i*9.0/5.0)+32.0));}
            else     {printf("%5.1lf ->%6.1lf\n",i,((i*9.0/5.0)+32.0));}
        }


     }
      if(strcmp(c,y)==0)
     {
        printf("   F  ->    C\n");
        for(i=low;i<=high;i=i+step)
        {
            if(abs(i)>=100.0){printf("%5.1lf ->%6.1lf\n",i,((i-32)*5/9));}
                else {printf("%5.1lf ->%6.1lf\n",i,((i-32)*5/9));}
        }


     }


    return 0;
}
