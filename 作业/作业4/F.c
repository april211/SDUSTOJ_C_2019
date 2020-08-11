#include <stdio.h>
int main()
{
    int n,a,i,sum,j;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        sum=0;
        for(i=n;i>=1;i--)
        {
            scanf("%d",&a);
            sum=sum+a;
            if(i==1){printf("%d\n",sum);}

        }

    }



    return 0;
}
