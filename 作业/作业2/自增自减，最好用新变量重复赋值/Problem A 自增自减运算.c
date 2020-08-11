#include <stdio.h>
int main()
{   int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    b=--a;
    f=++a;
    c=a--;
    g=a++;
    d=a++;
    h=a--;
    e=++a;
    i=--a;
    printf("  a   : %d\n",a);
    printf("--a   : %d\n",b);
    printf("  a-- : %d\n",c);
    printf("  a++ : %d\n",d);
    printf("++a   : %d",e);



    return 0;
}
