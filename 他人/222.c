#include <stdio.h>
#include <string.h>

int main()
{

    int a[1005]={0},b[1005]={0},s[1005]={0};
    int i1,i2,n,k,flag=1,i;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {

        if(k&1)
        {
            i1=0;
            scanf("%d",&a[0]);
            if(a[0]!=0)
            {
                scanf("%d",&a[1]);
                s[1]+=a[1];
                s[0]+=a[0];
                for(i1=1; a[i1]!=0;)
                {
                    scanf("%d",&a[++i1]);
                    s[i1]+=a[i1];
                }
            }
        }
        else
        {
            i2=0;
            scanf("%d",&b[0]);
            if(b[0]!=0)
            {
                scanf("%d",&b[1]);
                s[1]+=b[1];
                s[0]+=b[0];
                for(i2=1; b[i2]!=0;)
                {
                    scanf("%d",&b[++i2]);
                    s[i2]+=b[i2];
                }
            }
            if(i1<i2)i1=i2;
        }
        if(!(k&1)||k==n)//两次输出一个
        {
            for(i=0; i<i1; i++)
            {
                if(flag==0)
                    printf(" %d",s[i]);
                if(flag==1)
                {
                    printf("%d",s[i]);
                    flag=0;
                }
            }
            printf("\n");
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            memset(s,0,sizeof(s));
            flag=1;
        }
    }
    return 0;
}
