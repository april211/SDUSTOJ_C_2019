#include <stdio.h>
int is_daffodil(int n)
{
    int b,c,d;
    if(n<=999 && n>=100)
    {
        d=n%10;
        b=(n/100)%10;
        c=(n/10)%10;
        if(n==b*b*b+c*c*c+d*d*d) return 1;
        else return 0;
    }

    else
         return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
           );

     return 0;
}
