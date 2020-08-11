#include <stdio.h>
#include <string.h>
int main()
{
    int a[1001]={0};
    int b[1001]={0};
    int c[1001]={0};//初始化数组
    int i,j,k=0;
    int d;
    int s;
    while(scanf("%d",&d)!=EOF)
    {
        k++;
        if(k%2!=0)//讨论奇偶数情况的赋值jishu
        {
            for(i=0; i<d; i++)
                scanf("%d",&a[i]);
        }
        else
        {
            for(j=0; j<d; j++)
                scanf("%d",&b[j]);
        }
        if(k%2==0)//两次一输出
        {
            if(i>j)
            {
                for(s=0; s<i; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<i; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));//输出一次清空一次
            }
            else
            {
                for(s=0; s<j; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<j; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
            }
        }
    }
    if(d!=0&&k%2==1)//讨论奇数次输出 最后一次输出的情况
        for(s=0; s<i; s++)
        {
            if(s==0)
                printf("%d",a[s]);
            else
                printf(" %d",a[s]);
        }
        printf("\n");
    if(d==0&&k%2==1)
        printf("\n");
}
