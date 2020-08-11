#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int main()
{
    int N;
    int num;
    int i,j,k,p,q,z,m;
    int rank,col;
    int** arr;
    while(scanf("%d",&N)!=EOF)
    {
        arr=(int**)malloc(N*sizeof(int*));
        for(p=0; p<N; p++)
        {
            arr[p]=(int*)malloc(N*sizeof(int));
            memset(arr[p],0,N*sizeof(int));
        }

        j=1;
        arr[0][N/2]=1;
        rank=0;
        col=N/2;
        j++;
        while(1)//rank-1,col+1
        {
            if(j>N*N-1)
                break;
            rank--;
            col++;


            if(rank==-1 && col!=N)
            {
                rank=N-1;
                if(arr[rank][col]==0)
                {
                    arr[rank][col]=j;
                    j++;
                }
                else
                {
                    rank++;
                    rank++;
                    col--;
                    arr[rank][col]=j;
                    j++;
                }

            }
            else if(rank!=-1 && col==N)
            {
                col=0;
                if(arr[rank][col]==0)
                {
                    arr[rank][col]=j;
                    j++;
                }
                else
                {
                    rank++;
                    rank++;
                    col--;
                    arr[rank][col]=j;
                    j++;
                }

            }
            else if(rank==-1 && col==N)
            {
                rank=1;
                col=N-1;
                if(arr[rank][col]==0)
                {
                    arr[rank][col]=j;
                    j++;

                }
                else
                {
                    rank++;
                    rank++;
                    col--;
                    arr[rank][col]=j;
                    j++;
                }

            }
            else
            {
                if(arr[rank][col]==0)
                {
                    arr[rank][col]=j;
                    j++;
                }
                else
                {
                    rank++;
                    rank++;
                    col--;
                    arr[rank][col]=j;
                    j++;
                }

            }





        }
        if(N==1)
        {
            printf("1\n\n");
            continue;
        }
        else
        {
            arr[N-1][N/2]=j;
        }


        for(i=0; i<N; i++)  //ÐÐ
        {
            printf("%d",arr[i][0]);
            for(k=1; k<N; k++) //ÁÐ
            {
                printf(" %d",arr[i][k]);


            }

                printf("\n");



        }
        printf("\n");


    }





    return 0;
}
