#include <stdio.h>
#include <stdlib.h>

int a[400000]={0};
int main()
{
    int N,k,c,i,j,m,e,temp;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        scanf("%d",&k);
        a[k]=a[k]+1;

    }

    temp=a[0];
    for(m=1;m<N;m++)
    {
      if(a[m]>a[0])
      {
         a[0]=a[m];
      }

    }
    printf("%d",a[0]);




    return 0;
}
