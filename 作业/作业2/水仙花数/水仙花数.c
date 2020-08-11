#include <stdio.h>
int main()
{   int a,b,c,d;
    scanf("%d",&a);
    d=a%10;
    b=(a/100)%10;
    c=(a/10)%10;
    if(a==b*b*b+c*c*c+d*d*d)
       {printf("YES");}
    else
       {printf("NO");}

     return 0;
}
