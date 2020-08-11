#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct
{
    char name[30];
    char an[60];
    int fa;
    int pass;
    int r[120];
} F;
F f[120];
int main()
{
    int i,j,k,flag,m,n,s,q,len,max=0;
    scanf("%d %d",&s,&q);
    for(i=1; i<=s; i++)
    {
        scanf("%s",f[i].name);
        len=strlen(f[i].name);
        if(max<len)
            max=len;
        for(j=1; j<=q; j++)
        {
            getchar();
            scanf("%c",&f[i].an[j]);
        }
      getchar();
        scanf("%d",&f[i].fa);
    }
    for(i=1; i<=s; i++)
    {
        for(j=1; j<=s; j++)
        {
            for(k=1,n=0; k<=q; k++)
            {
                if(f[i].an[k]==f[j].an[k])
                    n++;
            }
            if(n>=f[i].fa)
            {
                f[i].r[j]=1;
                f[i].pass++;
            }
        }
    }
    for(i=1; i<=s; i++)
    {
        printf("%-*s:",max,f[i].name);
        for(j=1,flag=0; j<=s; j++)
        {
            if(f[i].r[j]&&j!=i)
            {
                printf("%s",f[j].name);
                flag++;
                if(flag!=f[i].pass-1)
                    printf(",");
            }
        }
        if(flag==0)
            printf("NONE!");
        printf("\n");
    }
    return 0;
}
