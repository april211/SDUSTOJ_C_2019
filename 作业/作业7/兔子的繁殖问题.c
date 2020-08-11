#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int i,n,j,m,flag=0;
    int feb[50];
    feb[0]=1;
    feb[1]=1;
    for(i=2;i<=45;i++)
    {
        feb[i]=feb[i-1]+feb[i-2];
    }
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&m);
        if(j!=n)
        {
            printf("%d\n",feb[m]);
        }
        else
        {
            printf("%d",feb[m]);
        }
    }






   return 0;
}
