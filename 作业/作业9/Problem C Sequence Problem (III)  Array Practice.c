#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 3000
#define max(a,b) ((a)>(b)?(a):(b))
int array1[MAX_SIZE],array2[MAX_SIZE];
int array3[MAX_SIZE];
int main()
{
    int count;
    int m,n,i,j,M,num1=0,num2=0;
    int ming;
    scanf("%d",&M);
    count=1;
    //memset(array1,0,sizeof(array1));
    memset(array2,0,sizeof(array2));

    while(count<=M)//jinxingcishu xiaoyu M
    {
        if(count==1&&M==1)
        {
            scanf("%d",&j);
            if(j==0)
            {
                printf("\n");
            }
            else
            {
                for(i=1; i<=j; i++)
                {
                    scanf("%d",&array1[i]);

                }
                num1=i-1;
                for(i=1; i<=num1; i++)
                {
                    if(i==1)
                    {
                        printf("%d",array1[i]+array2[i]);
                    }

                    else
                    {
                        printf(" %d",array1[i]+array2[i]);
                    }

                }
                printf("\n");
            }
            break;
        }
        if(count==1)
        {
            scanf("%d",&ming);
            if(ming==0)
            {
                num1=0;
            }
            else
            {
                for(i=1; i<=ming; i++)
                {
                    scanf("%d",&array1[i]);
                }
                num1=i-1;//i==ming
            }
            count++;
        }

        if(count!=1&&count%2!=0&&count<=M)
        {
            scanf("%d",&ming);
            if(ming==0)
            {
                num1=0;
            }
            else
            {
                for(i=1; i<=ming; i++)
                {
                    scanf("%d",&array1[i]);
                }
                num1=i-1;
            }
            if(num1==0&&num2==0)
            {
                printf("\n");
            }

            else
            {
                if(num1>num2)
                {
                    for(i=1; i<=num1; i++)
                    {
                        if(i==1)
                        {
                            printf("%d",array1[i]+array2[i]);
                        }

                        else
                        {
                            printf(" %d",array1[i]+array2[i]);
                        }

                    }
                }
                else
                {
                    for(i=1; i<=num2; i++)
                    {
                        if(i==1)
                            printf("%d",array1[i]+array2[i]);
                        else
                            printf(" %d",array1[i]+array2[i]);
                    }
                }
                printf("\n");
            }
                 num2=0;
            memset(array2,0,sizeof(array2));
            if(count==M)
            {
                if(num1==0)
                    printf("\n");
                else
                {
                    for(i=1; i<=num1; i++)
                    {
                        if(i==1)
                            printf("%d",array1[i]+array2[i]);
                        else
                            printf(" %d",array1[i]+array2[i]);
                    }
                    printf("\n");
                }
            }
            count++;
        }
        if(count%2==0&&count<=M)
        {
            scanf("%d",&ming);
            if(ming==0)
                num2=0;
            else
            {
                for(i=1; i<=ming; i++)
                {
                    scanf("%d",&array2[i]);
                }
                num2=i-1;
            }

            if(num1==0&&num2==0)
                printf("\n");
            else
            {
                if(num1>num2)
                {
                    for(i=1; i<=num1; i++)
                    {
                        if(i==1)
                            printf("%d",array1[i]+array2[i]);
                        else
                            printf(" %d",array1[i]+array2[i]);
                    }
                }
                else
                {
                    for(i=1; i<=num2; i++)
                    {
                        if(i==1)
                            printf("%d",array1[i]+array2[i]);
                        else
                            printf(" %d",array1[i]+array2[i]);
                    }
                }
                printf("\n");

            }

            num1=0;
            memset(array1,0,sizeof(array1));
            if(count==M)
            {
                if(num2==0)
                    printf("\n");
                else
                {
                    for(i=1; i<=num2; i++)
                    {
                        if(i==1)
                            printf("%d",array1[i]+array2[i]);
                        else
                            printf(" %d",array1[i]+array2[i]);
                    }
                    printf("\n");
                }
            }
            count++;
        }
    }
    return 0;
}
