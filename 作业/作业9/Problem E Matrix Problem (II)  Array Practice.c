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
        i++;                              //��ʼֵi==1
        if(i%2!=0)                        //�������󣬼���Կ�ǰ��һ������
        {
             scanf("%d %d",&m1,&n1);     //��¼��������Ľ���
        }

        else                                //�ڶ��βŽ���
        {
             scanf("%d %d",&m2,&n2);                   //��¼ż������Ľ�������Կ���ľ���
        }

        if((m1==0&&n1==0)||(m2==0&&n2==0))  break;    //��ʱ�������Ϊ0��������ֹ��������ֱֹ�ӽ�������

        if(i%2!=0)
            {
                for(j=0;j<m1;j++)                      //��iΪ����������A
                {
                     for(k=0;k<n1;k++)
                     {
                         scanf("%d",&A[j][k]);
                     }

                }

            }
        else
            {
                for(j=0;j<m2;j++)     //��iΪż��������B
                {
                     for(k=0;k<n2;k++)
                     {
                         scanf("%d",&B[j][k]);
                     }

                }

            }
                            //һ�����
            if(i%2!=0)  continue;           //ֻ���������󲻲������,�������صȴ�����ż������
            else if((m2!=m1)||(n2!=n1))    //���������ӷ��Ĺ���
            {
                printf("Not satisfied the definition of matrix addition!\n\n");
            }

            else                           //������ż�������������������ĺ�
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


