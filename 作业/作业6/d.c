#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,flag;
    while(1)
    {
        flag=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 || b==0 ||c==0) break;
        if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b)
        {
            if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
            {
                flag++;
                printf("a isosceles triangle\n");
            }

            if(a==b && b==c)
            {
                flag++;
                printf("a equileteral triangle\n");
            }

            if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
            {
                flag++;
                printf("a right triangle\n");
            }
            if(flag==0)
            {
                if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b)
                {
                    printf("a triangle\n");
                }
            }

         }
         else
            {
               printf("not a triangle\n");
            }

     }





   return 0;
}
