#include <stdio.h>

int main ()
{
    int M,a,b,c,k,sum=0,i,j,n=0,l,num1[10000],m=0;
    scanf("%d",&M);
    for(i=1; i<=M; i++)
    {
        scanf("%d %d %d",&a,&b,&k);
        for(j=a; j<=b; j++)
        {
            num1[n]=j;
            n++;
        }



        for(l=0; l<b-a+1; l++)
        {
            c=num1[l];

            if(num1[l]<0)
            {
                num1[l]=-num1[l];
            }

            while(num1[l])
            {
                if(num1[l]%10==k)
                {

                    sum=sum+c;

                    break;
                }
                num1[l]=num1[l]/10;
            }
        }
        printf("%d\n",sum);
        sum=0;
        n=0;
    }
    return 0;
}
