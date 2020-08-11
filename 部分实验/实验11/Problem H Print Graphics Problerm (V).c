#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m,n;
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        for(i=1; i<=N/2; i++)
        {
            for(j=1; j<=(N/2)-i+1; j++)
            {
                printf(" ");
            }
            printf("*");
            for(m=1; m<2*i-2; m++)
            {
                printf(" ");
            }
            if(i!=1)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("*");
        for(m=1; m<2*i-2; m++)
        {
            printf(" ");
        }
         printf("*\n");
         for(i=N/2; i>=1; i--)
        {
            for(j=1; j<=(N/2)-i+1; j++)
            {
                printf(" ");
            }
            printf("*");
            for(m=1; m<2*i-2; m++)
            {
                printf(" ");
            }
            if(i!=1)
            {
                printf("*");
            }
            printf("\n");
        }

    }



    return 0;
}
