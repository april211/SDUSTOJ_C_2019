#include <stdio.h>
int main()
{
    int N,a,i,j,k=0,b,flag=0,n=0;
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
            n=0;
            k=0;
            for(j=N;j>=1;j--)
        {
            k++;
            if(  fig[j]==a && n==0)
            {
                n++;
            }
            if( fig[j]==a && n==1)
            {
                n++;
                printf("%d\n",j);

            }

        }
              if(n==0 && k!=0)
              {
                  printf("NOT FOUND\n");

              }






    }

    return 0;
}
