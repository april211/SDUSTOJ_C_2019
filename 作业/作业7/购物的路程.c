#include <stdio.h>
int main()
{
    int N,i,j,k,max,min;
    int a[300001];
    while(1)
    {
       scanf("%d",&N);
       if(N==0) break;
       for(i=0;i<N;i++)
       {
          scanf("%d",&a[i]);
       }
       max=a[0];
       min=a[0];
       for(k=1;k<N;k++)
       {
           if(a[k]>max)
               max=a[k];
        }
        for(j=1;j<N;j++)
       {
           if(a[j]<min)
               min=a[j];
        }

        printf("%d\n",2*(max-min));
      }

     return 0;

  }
