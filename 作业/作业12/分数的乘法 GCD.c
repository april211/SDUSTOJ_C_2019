#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
struct fraction
{
    int numerator; // 分子
    int denominator; // 分母
    int symbol; // 符号，分子为负时取值为-1，为正时取值为1，其它取值无意义
};
int scan_frac(struct fraction *f, struct fraction *g)
{
    int a;
    a=scanf("%d/%d*%d/%d",&f->numerator,&f->denominator,&g->numerator,&g->denominator);
    return a;
}
struct fraction multiply_frac(struct fraction f, struct fraction g)
{
    int a,b;
    b=f.denominator*g.denominator;
    if(b<0)
    {
        f.symbol=-1;
        b=-b;
    }
    a=f.numerator*g.numerator;
    if(a<0)
    {
        f.symbol=-1;
        a=-a;
    }
    int c=gcd(a,b);
    f.denominator=b/c;
    f.numerator=a/c;
    return f;
};

int main()
{
    struct fraction f1, f2, product;
    while(scan_frac(&f1, &f2) != EOF)
    {
        product = multiply_frac(f1, f2);
        if(product.numerator == 0)
        {
            printf("0\n");
            continue;
        }
        if(product.symbol == -1)
            printf("-");
        printf("%d/%d\n", product.numerator, product.denominator);
    }
    return 0;
}

