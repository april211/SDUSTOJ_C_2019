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
            else if(m2!=n1)                      //������˷�����
            {
                printf("Not satisfied the definition of matrix multiplication!");
                c=-2;   //��Ȼ������-2�����Ƿ���ȥ��++�͵�-1�ˣ��ظ��ж�
                continue;
            }
            else
            {
                c=-2;   //����continue����������ִ��
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
            else if(m2!=n1)                      //������˷�����
            {
                printf("Not satisfied the definition of matrix multiplication!");
                c=-1;
                continue;
            }
            else         //�������˷�����ʱ��ִ�г˷�����ʱn1==m2.
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

