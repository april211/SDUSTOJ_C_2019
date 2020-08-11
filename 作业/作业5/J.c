#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(i==1)
       {
           if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b)
            printf("YES");
           else
            printf("NO");
       }
       else
        {
           if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b)
            printf("YES\n");
           else
            printf("NO\n");
        }

    }













    return 0;
}
