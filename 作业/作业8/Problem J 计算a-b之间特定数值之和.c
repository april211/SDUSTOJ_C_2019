#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int M,i,a,b,j,k,temp=0,m,sum=0,tn=0;
    scanf("%d",&M);
    for(i=1;i<=M;i++)//一共有M组数据
    {
        sum=0;
        scanf("%d %d %d",&a,&b,&k);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;

        }

        for(j=a; j<=b; j++) //在两个数之间遍历取值
        {

            tn=j;
            while(tn!=0)
            {
                if(abs(tn)%10==k)
                {
                    sum=sum+j;
                    break;
                }
                tn=tn/10;
            }
        }
         printf("%d\n",sum);
    }





    return 0;
}
