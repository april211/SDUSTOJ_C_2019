#include <stdio.h>
int main()
{
    int n,a,b,c,d,e;
    while(scanf("%d",&n)!=EOF)
    {
       a=0;
       b=0;
       c=0;
       d=0;
       e=0;
       a=n%50;
       b=(n-a)%20;
       c=(n-a-b)%10;
       d=(n-a-b-c)%5;
       e=n-a-b-c-d;
       if(n)



    }



    return 0;
}
