#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
char arr[10];
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
struct fraction multiply_frac(struct fraction f, struct fraction g)//�˻�
{
    struct fraction ans;
    int a=0,b=0;
    int min;
    int sym=0;
    a=(f.numerator)*(g.numerator);
    b=(f.denominator)*(g.denominator);
    sym=(a>0?1:-1);
    a=abs(a);
    min= abs(a)<abs(b)?abs(a):abs(b);
    while(min>1)//��֤��������
    {
        if( a%min==0 && b%min==0 )
        {
            a=a/min;
            b=b/min;
        }
        min--;
    }
    ans.numerator=a;
    ans.denominator=b;
    ans.symbol=sym;

    return ans;
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
