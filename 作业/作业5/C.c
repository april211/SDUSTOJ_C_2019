#include <stdio.h>
#include <math.h>
int is_primer(int num)
{
    int j,flag=0;
    if(num==1)
        return 0;
    else
    {
         for(j=2;j<=sqrt(num);j++)
         {
           if(num%j==0)
             flag++;
           if(num%j==0)break;

         }
           if(flag==1)
             return 0;
           else
            return 1;
    }

}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}





