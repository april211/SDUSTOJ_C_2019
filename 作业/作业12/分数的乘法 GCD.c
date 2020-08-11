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
    int numerator; // ����
    int denominator; // ��ĸ
    int symbol; // ���ţ�����Ϊ��ʱȡֵΪ-1��Ϊ��ʱȡֵΪ1������ȡֵ������
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

