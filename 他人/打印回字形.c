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
            if( i==0 && j==0 )//坐标原点处为空格
            {
                putchar(' ');
            }
            else if( abs(i)%2!=0 && abs(j)<=abs(i) )//横坐标为奇数，且|y|<=|x|
            {
                putchar('@');
            }
            else if( abs(j)%2!=0 && abs(i)<=abs(j) )//纵坐标为奇数，且|x|<=|y|
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
