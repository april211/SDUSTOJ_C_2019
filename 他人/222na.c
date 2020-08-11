#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 3000
#define max(a,b) ((a)>(b)?(a):(b))
int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE];
int count=0;
int main()
{
    int n=0,m=0,count2=0,i,j=0;
    int temp1,M=0;
       scanf("%d",&M);
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       memset(c,0,sizeof(c));
    for(n=1;n<=M;n++)
    {
        if(n%2!=0)//n不是偶数时
        {
            count=0;
            while(1)//将数赋值进数组中，到0结束
            {
                scanf("%d",&m);
                if(m==0) break;
                else
                {
                    a[count]=m;
                    count++;
                }
            }
        }
        else//n是偶数时
        {
            count2=0;
            while(1)//第二个数组的赋值
            {
                scanf("%d",&m);
                if(m==0) break;
                else
                {
                    b[count2]=m;
                    count2++;
                }
            }
        }
        if(n%2==0)
        {
            if(count2==0&&count==0)//两行数都是0，一组的情况下
            {
                 printf("\n");
            }

            else
            {
                if(count2<count)
                {
                    temp1=count2;
                    count2=count;
                    count=temp1;
                }
                for(i=0;i<count2;i++)
                {
                    c[i]=a[i]+b[i];
                }

                    printf("%d",c[0]);

                for(i=1;i<count2;i++)
                {
                    printf(" %d",c[i]);
                }

                    printf("\n");

            }

              memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                  memset(c,0,sizeof(c));
        }
    }
    if((count!=0)  &&  (M%2==1))
        {
            printf("%d",a[0]);

            for(i=1;i<count;i++)
            {
                 printf(" %d",a[i]);
            }

            printf("\n");

            memset(a,0,sizeof(a));
        }
    if((count==0) && (M%2==1))
    {
            printf("\n");
    }














        return 0;
}
