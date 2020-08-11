#include <stdio.h>
int main()
{
    int n,a,i,sum,j;
        scanf("%d",&j);
    while(1)
    {
        j--;
        if(j==-1) break;
        scanf("%d",&n);
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
