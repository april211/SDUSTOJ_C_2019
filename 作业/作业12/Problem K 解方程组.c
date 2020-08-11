#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_SIZE 53
double a[MAX_SIZE][MAX_SIZE];
double b[MAX_SIZE][MAX_SIZE];
int main()
{
    int i,j,k;
    int l,m,n;
    int temp;
    int count=0,count1=0;//youtzz
    double cnt[MAX_SIZE][MAX_SIZE];
    memset(cnt,0,sizeof(cnt));
    double x,y;
       scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        count=0;
        count1=0;
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            for(k=0; k<n+1; k++)   //把常数项也放进二维数组中，即形成增广矩阵
            {
                scanf("%lf",&a[j][k]);
                count++;
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j][j]!=0) continue;   //保证对角线不是0
            int flag=0;
            for(k=0;k<n;k++)
            {
                if(flag!=0) break;
                if(a[j][k]!=0 && a[k][j]!=0)
                {
                    for(l=0; l<n+1;l++)
                    {
                        temp=a[j][l];
                        a[j][l]=a[k][l];
                        a[k][l]=temp;
                    }
                    flag=1;
                    count1++;
                }
            }
        }

        for(j=0; j<n-1; j++)
        {

            for(k=0; k<n; k++)
            {
                if(k>j)//gaosixiaoyuanfa
                {
                    x=a[k][j]/a[j][j];
                    for(l=0; l<=n; l++)
                    {
                        a[k][l]=a[k][l]-x*a[j][l];
                    }

                }
            }
        }
        for(j=n-1; j>=1; j--)
        {
            for(k=n-1; k>=0; k--)
            {
                if(k<j)
                {
                    y=a[k][j]/a[j][j];
                    for(l=n; l>=0; l--)
                    {
                         a[k][l]=a[k][l]-y*a[j][l];
                    }

                }
            }
        }
        for(j=0; j<n; j++)
        {
            a[j][n]=(a[j][n])/(a[j][j]);
            a[j][j]=1.0;
        }
        for(j=0; j<n; j++)
        {
            printf("x%d=%.3lf",j+1,a[j][n]);
            if(j!=n-1)
               printf("\n");//控制格式

        }
        if(i!=m-1)
           printf("\n\n");

    }
}


