#include <stdio.h>

int main()
{
   double m,n,x;
   scanf("%lf %lf %lf",&m,&n,&x);
   if (m*x>=n)
   {
       printf("%.2lf",0.88*m*x);
   }
   else if (0<m*x<n)
   {
       printf("%.2lf",m*x);
   }

   return 0;
}
