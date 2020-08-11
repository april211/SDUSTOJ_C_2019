#include <stdio.h>
int main ()
{
    double z,C,F,i,m,n;
    char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    scanf("%lf",&m);
    scanf("%lf",&n);
    scanf("%lf",&z);
    if(a=='C')
    {
        printf("   C  ->    F\n");
        for(i=m;i<=n+0.01;i=i+z)
        {
            F=9*i/5+32;
            printf("%5.1lf -> %5.1lf\n",i,F);
        }
    }
    else if(a=='F')
    {
        printf("   F  ->    C\n");
        for(i=m;i<=n+0.01;i=i+z)
        {
            C=(i-32)*5/9;
            printf("%5.1lf -> %5.1lf\n",i,C);
        }
    }
    return 0;
}
