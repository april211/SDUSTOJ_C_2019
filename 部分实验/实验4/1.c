#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
   {
         if(a<10)
        printf("%d",a);
         else
        printf("%.2d",a%100);
   }
    else{
         a=-a;
         if(a<10)
        printf("%d",a);
         else
        printf("%02d",a%100);

   }

return 0;
}
