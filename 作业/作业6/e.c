#include <stdio.h>
int main()
{
    int N,a,i,j,k,flag=0;
    int fig[30000];
    scanf("%d",&N);
    while(flag<=1)
    {
         if(flag==0)
       {
           fig[0]=N;
           flag++;
       }
        else
       {
           for(i=1;i<=N;i++)
           {

             scanf(" %d",&fig[i]);
           }
           flag++;
       }
    }


    while(scanf("%d",&a)!=EOF)
    {
        if( a>=1 && a<=N )
        {
            printf("%d\n",fig[a]);
        }
        else
        {
            printf("OUT OF RANGE\n");
        }

    }

    return 0;
}
