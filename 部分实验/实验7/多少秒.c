#include <stdio.h>
int main()
{
    int a,b,c,n;
    while(scanf("%d:%d:%d",&a,&b,&c)!=EOF)
    {
        n=3600*a+b*60+c+1;
        printf("%d\n",n);
    }


   return 0;
}
