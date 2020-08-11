#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,a,b,m,i,j,flag=0;
    n=1;
    while(scanf("%d %d",&a,&b)!= EOF)
    {
        printf("case %d:",n);
        flag=0;
        for(i=a; i<=b; i++)
        {
            for(j=i+1; j<=b; j++)
            {
                m=sqrt(i*i+j*j);
              //  if(m<=b)
             //   {
                    if(m*m==i*i+j*j)
                    {
                        if(flag!= 0)
                        {
                            printf(";");
                        }

                            printf("%d,%d,%d",i,j,m);
                        flag++;
                   }
               // }
            }
        }

        if(flag==0)
        {
             printf("No pythagorean triple");
        }
          printf("\n");
            n++;
    }



    return 0;
}
