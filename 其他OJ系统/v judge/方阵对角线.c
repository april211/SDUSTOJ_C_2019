#include <stdio.h>
#define maxsize 300


int main()
{
    int i,sum1=0,sum2=0,size,j,k,m,num[maxsize][maxsize];
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
             scanf("%d",&num[i][j]);
        }

    }
    for(k=0;k<size;k++)
    {
        for(m=0;m<size;m++)
        {

           if(m==k)
           {
               sum1=sum1+num[k][m];
           }
        }


    }
     for(k=0;k<size;k++)
    {
        for(m=0;m<size;m++)
        {

           if((k+m)==(size-1))
           {
               sum2=sum2+num[k][m];
           }
        }


    }

    printf("%d %d",sum1,sum2);

    return 0;
}
