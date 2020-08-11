#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 300
#define max(a,b) ((a)>(b)?(a):(b))
int A[MAX_SIZE][MAX_SIZE],B[MAX_SIZE][MAX_SIZE];
int main()
{
    int m1,n1,m2,n2;
    int i=0,j=0,k=0;
    while(1)
    {
        i++;                              //初始值i==1
        if(i%2!=0)                        //奇数矩阵，即相对靠前的一个矩阵
        {
             scanf("%d %d",&m1,&n1);     //记录奇数矩阵的阶数
        }

        else                                //第二次才进行
        {
             scanf("%d %d",&m2,&n2);                   //记录偶数矩阵的阶数（相对靠后的矩阵）
        }

        if((m1==0&&n1==0)||(m2==0&&n2==0))  break;    //此时如果阶数为0；满足终止条件并终止直接结束程序

        if(i%2!=0)
            {
                for(j=0;j<m1;j++)                      //若i为奇数，存入A
                {
                     for(k=0;k<n1;k++)
                     {
                         scanf("%d",&A[j][k]);
                     }

                }

            }
        else
            {
                for(j=0;j<m2;j++)     //若i为偶数，存入B
                {
                     for(k=0;k<n2;k++)
                     {
                         scanf("%d",&B[j][k]);
                     }

                }

            }
                            //一组矩阵
            if(i%2!=0)  continue;           //只有奇数矩阵不产生输出,继续返回等待输入偶数矩阵
            else if((m2!=m1)||(n2!=n1))    //不满足矩阵加法的规则
            {
                printf("Not satisfied the definition of matrix addition!\n\n");
            }

            else                           //若存在偶数矩阵，输出与奇数矩阵的和
            {
                for(j=0;j<m1;j++)
                {
                    for(k=0;k<n1;k++)
                    {
                        if(k==0)
                        {
                            printf("%d",A[j][k]+B[j][k]);
                        }
                        else
                        {
                             printf(" %d",A[j][k]+B[j][k]);
                        }

                    }
                         printf("\n");
                }
                    printf("\n");
            }

    }
    return 0;
}


