#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 109
int WRI(int array[],int m,int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    return 0;
}
int array1[MAX_SIZE][MAX_SIZE],array2[MAX_SIZE][MAX_SIZE],ans[MAX_SIZE][MAX_SIZE];
int main()
{
    int m1,n1,m2,n2;
    int ansm,ansn;                             //m  is hang ,n is lie.
    int i,j,k,p;
    int c=0;
    while(1)
    {
        c++;
        if(c==-1)
        {
            m1=m2;n1=n2;
            scanf("%d %d",&m2,&n2);
            if(m2==0 && n2==0)
                break;
            else if(m2!=n1)                      //不满足乘法定义
            {
                printf("Not satisfied the definition of matrix multiplication!");
                c=-2;   //虽然这里是-2，但是反上去再++就到-1了；重复判断
                continue;
            }
            else
            {
                c=-2;   //不加continue，继续向下执行
            }



        }
        if(c==-2)
        {
            c=1;

        }
        if(c==1)
        {
            memset(array1,0,sizeof(array1));
            memset(array2,0,sizeof(array2));
            scanf("%d %d",&m1,&n1);
            if(m1==0 && n1==0)
                break;
            WRI(array1,m1,n1);
        }
        else//c!=1
        {
            scanf("%d %d",&m2,&n2);
            if(m2==0 && n2==0)
                break;
            else if(m2!=n1)                      //不满足乘法定义
            {
                printf("Not satisfied the definition of matrix multiplication!");
                c=-1;
                continue;
            }
            else         //满足矩阵乘法定义时，执行乘法，此时n1==m2.
            {
                // k=n1;
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n2; j++)
                    {
                        for(k=n1; k>=0; k--)
                        {
                            ans[i][j]=ans[i][j]+array1[i][k]*array2[k][j];

                        }

                    }
                }
                for()
                    if()
                    {
                        printf("%d",ans[i][j]);
                    }

            }


        }



    }
    return 0;
}

