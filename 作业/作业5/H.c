#include <stdio.h>
int print_graphic(int a, char c)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        for(k=a-i;k>=1;k--)
         {
             printf(" ");
         }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}
int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}
