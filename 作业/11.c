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
    if(ppp==1)    //�������whileѭ������
    {
        scanf("%d",&p);     //���ǵ�һ�еĵ�һ�����֣�����һ�в�������ֵĸ���
        if(M==1 && p==0)    //�ܹ�������һ�����������������ĸ���Ϊ0�����������ĵ�һ������0��
        {
            printf("\n");   //ֻ���һ������
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
                    printf(" %d",array1[i]);  //��Ϊֻ��һ�У�����Ҫ����ӻ���
                }
            }
        }
        if(M>1)     //������������������1�У����Ҵ�ʱcount==1
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
                for(k=0; k<max(p,q); k++) //��ֵת��λ�ã�Ϊ�������ڳ��ռ�
                {
                    array1[k]=array2[k];
                }
                p=q;                   //��ֵת��λ�ã�Ϊ�������ڳ��ռ�
                count++;  //��¼ʵ�����мӺͼ���Ĵ���
                memset(array3,0,sizeof(array3));
                memset(array2,0,sizeof(array2));
            }
            if(count==M-1)//�����������ݣ�ʵ���ϼ���2�Σ�Ȼ���ٵ������һ�����һ������
            {
                if(p==0)
                {
                    printf("\n");
                }
                else
                {
                    for(f=0; f<p; f++)//��ʱp==q
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
