#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define MAX_SIZE 200
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
double* allocate(int n)
{
    double* num;
    num=(double*)malloc(n*sizeof(double));
    memset(num,0,sizeof(num));
    return num;
}

void input(double* p, int n)
{
    int i;
    double num;
    for(i=0;i<n;i++)
    {

        scanf("%lf",&num);//printf("==%lf==",num);
        p[i]=num;

    }

}

void output(double* p, int N)
{
    int m,n;
    int i;
     scanf("%d %d",&m,&n);
     if(n<1 || m>N)
     {
         printf("no output\n");
     }
     else
     {
         for(i=max(0,m-1);i<min(n,N);i++)//max0!!!
         {
             printf("%lg",p[i]);
             if(i!=n-1)
             {
                 printf("\n");
             }
         }


     }
}

void release(double* p)
{
     free(p);
}
int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
