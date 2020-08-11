#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    if(a>=12)
    {
        if(a==12)
        {
            printf("%d:%02d p.m.",a,b);
        }
        else
            printf("%02d:%02d p.m.",a-12,b);

    }
    else
    {
        if(a==0)
            printf("%02d:%02d a.m.",a+12,b);
        else
            printf("%02d:%02d a.m.",a,b);

    }


   return 0;
}
