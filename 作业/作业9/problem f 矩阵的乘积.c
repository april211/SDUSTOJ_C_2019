#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 109
int a[MAX_SIZE][MAX_SIZE],b[MAX_SIZE][MAX_SIZE],c[MAX_SIZE][MAX_SIZE];

int main()
{

    int m,n,m1,n1;
    int i=0,j=0,k=0,p=0;

    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0 && n==0)
            break;
        else
        {
              k++;
            if(k==1)                          
            {                 
                  for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        scanf("%d",&b[i][j]);
                    }

                }
                m1=m;
                n1=n;     

            }
            else                        
            {
                for(i=0;i<m;i++)
                {
                     for(j=0;j<n;j++)
                    {
                        scanf("%d",&a[i][j]);
                    }

                }

            }
            if(k==1)  continue;    //����������������������
            else
            {
                if(n1==m)    
                {
                	memset(c,0,sizeof(c));
                    for(i=0;i<m1;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            for(p=0;p<m;p++)//ʵ���ϣ���ʱ m==n1
                            {
                                c[i][j]=c[i][j]+b[i][p]*a[p][j];   //��������ʱ�浽c�У�
                            }

                        }
                    }
                    for(i=0;i<m1;i++)
                    {
                          for(j=0;j<n;j++)
                          {
                               b[i][j]=c[i][j];        
                          }

                    }

                    n1=n;      //b���������a������������������ǰ������ ������
                }
                else                           //��������Ͼ���ĳ˷����� 
                {
                    printf("Not satisfied the definition of matrix multiplication!\n\n");
                    memset(b,0,sizeof(b));   //���b���� 
                    for(i=0;i<m;i++)                //��a���浽b
                    {
                         for(j=0;j<n;j++)
                            {
                                 b[i][j]=a[i][j];
                            }

                    }

                    m1=m;
                    n1=n;
                           continue;
                }
            }
            for(i=0;i<m1;i++)
            {
                printf("%d",b[i][0]);
                for(j=1;j<n1;j++)
                {
                    printf(" %d",b[i][j]);
                }
                    printf("\n");
            }
                printf("\n");
        }

    }
    return 0;
}

