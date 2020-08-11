#include <stdio.h>
int main()
{
    double a,b,c;
    int   x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%.2lf %.2lf %.2lf\n",x*a/100,x*b/100,x*c/100 );
    printf("%.2lf %.2lf %.2lf",100*y/a,100*y/b,100*y/c   );



    return 0;
}
