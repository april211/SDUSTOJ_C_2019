#include <stdio.h>
int main()
{
    int n,a,i,sum,j,k;
        scanf("%d",&j);
    for(k=j;k>=1;k--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=n;i>=1;i--)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
                if(k!=1)
                    {printf("%d\n\n",sum);}
                else
                    {printf("%d",sum);}






    }

    return 0;
}
