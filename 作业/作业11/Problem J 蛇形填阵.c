#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int snake[51][51]= {0};
int main()
{
    int N;
    int i,j,k;
    int num;
    while(scanf("%d",&N)!=EOF)
    {
        i=1;
        int x=0,y=N-1;
        int count=0;
        snake[x][y]=1;
        while(i<N*N)
        {
            while(snake[x+1][y]==0 && x<=N-2)
            {
                i++;
                snake[++x][y]=i;

            }
           // if(i==N*N) break;
            while(snake[x][y-1]==0 && y>=1)
            {
                i++;
                snake[x][--y]=i;

            }
            //if(i==N*N) break;
            while(snake[x-1][y]==0 && x>=1)
            {
                i++;
                snake[--x][y]=i;

            }
            //if(i==N*N) break;
            while(snake[x][y+1]==0)
            {
                i++;
                snake[x][++y]=i;

            }
            //if(i==N*N) break;
        }
        for(j=0; j<N; j++)
        {
            for(k=0; k<N; k++)
            {
                if(k==0)
                {
                    printf("%d",snake[j][k]);
                }
                else
                {
                    printf(" %d",snake[j][k]);
                }

                //if(k==N-1)
               // {
               //     printf("\n");
                //}
            }

                    printf("\n");

        }
        memset(snake,0,sizeof(snake));
        printf("\n");


    }







    return 0;
}
