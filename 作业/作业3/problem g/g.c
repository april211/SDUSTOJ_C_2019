#include <stdio.h>
int main()
{
    int n,i,a=1,b,c=1,max,min;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
       while(a==c)
        {
            max=b;
            min=b;
            a++;

        }
        if(b>max)
            {max=b;}
        if(b<min)
            {min=b;}

    }

    printf("The maximum number is %d.\nThe minimum number is %d.",max,min);










    return 0;
}
