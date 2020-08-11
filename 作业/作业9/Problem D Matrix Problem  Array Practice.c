#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 910
#define max(a,b) ((a)>(b)?(a):(b))
int array1[MAX_SIZE][MAX_SIZE];
int main()
{
    int k=0,i=0,j=0;
    int M,a=0,b=0;
    int c=0;
        scanf("%d",&M);
    for(k=1;k<=M;k++)
    {
        scanf("%d %d",&a,&b);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&array1[i][j]);
            }

        }
        if(k==1)
        {
            for(i=0; i<b; i++)
            {
                for(j=0; j<a; j++)
                {
                    if(j==a-1)
                    {
                        printf("%d",array1[j][i]);
                        if(i!=b-1 || k!=M)
                        {
                           printf("\n");
                        }
                    }
                    else
                    {
                        printf("%d ",array1[j][i]);
                    }

                }

            }
        }
        else
        {
            printf("\n");
            for(i=0; i<b; i++)
            {
                for(j=0; j<a; j++)
                {
                    if(j==a-1)
                    {
                        printf("%d",array1[j][i]);
                        if(i!=b-1 || k!=M)
                        {
                           printf("\n");
                        }
                    }
                    else
                    {
                        printf("%d ",array1[j][i]);
                    }

                }

            }
        }






    }

    return 0;

}
