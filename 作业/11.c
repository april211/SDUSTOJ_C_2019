#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1010
#define max(a,b) ((a)>(b)?(a):(b))
int array1[MAX_SIZE],array2[MAX_SIZE];
int array3[MAX_SIZE];
int main()
{
    int M;
    int i,j,k,f,count=0,ppp=1;
    int p,q;
    scanf("%d",&M);
    if(ppp==1)    //这个不在while循环里面
    {
        scanf("%d",&p);     //这是第一行的第一个数字，即第一行参与的数字的个数
        if(M==1 && p==0)    //总共就输入一行数，并且这行数的个数为0（即这行数的第一个数是0）
        {
            printf("\n");   //只输出一个空行
        }
        if(M==1 && p!=0)
        {
            for(i=0; i<p; i++)
            {
                scanf("%d",&array1[i]);
                if(i==0)
                {
                    printf("%d",array1[i]);
                }
                else
                {
                    printf(" %d",array1[i]);  //因为只有一行，不需要再添加换行
                }
            }
        }
        if(M>1)     //如果输入的总行数超过1行，并且此时count==1
        {
            for(i=0; i<p; i++)
            {
                scanf("%d",&array1[i]);
            }
            ppp++;//ppp==2
        }
    }
    if(ppp==2)
    {
        while(1)
        {
            if(count<M-1)
            {
                scanf("%d",&q);
                for(i=0; i<q; i++)
                {
                    scanf("%d",&array2[i]);
                }
                for(j=0; j<max(p,q); j++)
                {
                    array3[j]=array1[j]+array2[j];
                    if(j==0)
                    {
                        printf("%d",array3[j]);
                    }
                    if(j!=0)
                    {
                        printf(" %d",array3[j]);
                    }

                }
                printf("\n");
                for(k=0; k<max(p,q); k++) //数值转移位置，为新数据腾出空间
                {
                    array1[k]=array2[k];
                }
                p=q;                   //数值转移位置，为新数据腾出空间
                count++;  //记录实际运行加和计算的次数
                memset(array3,0,sizeof(array3));
                memset(array2,0,sizeof(array2));
            }
            if(count==M-1)//例如三组数据，实际上加了2次，然后再单独输出一遍最后一组数据
            {
                if(p==0)
                {
                    printf("\n");
                }
                else
                {
                    for(f=0; f<p; f++)//此时p==q
                    {
                        if(f==0)
                        {
                            printf("%d",array1[f]);
                        }
                        if(f!=0)
                        {
                            printf(" %d",array1[f]);
                        }

                    }
                }


                break;
            }



        }
    }



    return 0;
}
