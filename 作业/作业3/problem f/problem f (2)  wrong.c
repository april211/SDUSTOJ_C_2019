#include <stdio.h>
int main()
{   int k,m,n,a,b,c,d,z,i;
    scanf("%d %d %d",&k,&m,&n);
    if(m>=n)
    {
       c=m;
       d=n;

     }
    else
    {
       c=n;
       d=m;

    }
       for(i=1;;i++)
     {
        a=d*i;
       if (a==m*n) continue;
       if (a>k) break;

      }


       for(z=1;;z++)
      {
          b=c*z;
       if (b==m*n) continue;
       if (b>k) break;



       }








     return 0;
 }
