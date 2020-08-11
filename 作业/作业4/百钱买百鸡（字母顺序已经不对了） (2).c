#include <stdio.h>
int main()
{
    long int n,m;
    int a,b,c,d,x,y,z,i,j,k;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%ld,%ld,%ld/%ld,%ld,%ld",&a,&b,&c,&d,&m,&n)!=EOF)
    {
        i=0;
        j=0;
        for(x=0;x<=m/a;x++)
        {

          y=((c*n-m*d)-(c-a*d)*x)/(c-b*d);
          z=((m*d-b*n*d)-(a*d-d*b)*x)/(c-b*d);
          if((x+y+z==n) && ((z*c)%d==0) && (a*d*x+b*d*y+c*z==m*d) && (x>=0) && (y>=0) && (z>=0))
            {
                if(j==0)
                {
                          j++;
                          i++;
                          printf("COCKS,HENS,CHICKS\n");
                          printf("%ld,%ld,%ld\n",x,y,z);
                }
                 else {
                       printf("%ld,%ld,%ld\n",x,y,z);
                      }
            }

        }
                if(i==0)
                {
                    i++;
                    printf("Cannot buy!\n");
                }

               printf("\n");




     }


    return 0;
}
