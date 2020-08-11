#include <stdio.h>
int main()
{
    int N,n,m,i,j,start,end,t;
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
        scanf("%d%d",&n,&m);
        if(n>m)
        {
            t=n;
            n=m;
            m=t;
        }
        start=n;
        end=m;
        for(i=start;i<end;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n\n",end);//此处特殊处理最后一个数（最大的数），可避免   因数据溢出造成的死循环
    }
    return 0;
}
