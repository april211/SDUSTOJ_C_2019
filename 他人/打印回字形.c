#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=-(2*n-1); i<=2*n-1; i++)//x
    {
        for(j=-(2*n-1); j<=2*n-1; j++)//y
        {
            if( i==0 && j==0 )//����ԭ�㴦Ϊ�ո�
            {
                putchar(' ');
            }
            else if( abs(i)%2!=0 && abs(j)<=abs(i) )//������Ϊ��������|y|<=|x|
            {
                putchar('@');
            }
            else if( abs(j)%2!=0 && abs(i)<=abs(j) )//������Ϊ��������|x|<=|y|
            {
                putchar('@');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }


    return 0;
}
