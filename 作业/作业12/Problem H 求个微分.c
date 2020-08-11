#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_SIZE 1500
int main()
{
    int N;
    double x,ans1;
    int i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%lf",&x);
        ans1=pow(cos(x),-3.0);
        printf("%.2lf",ans1);
        if(i!=N)
            printf("\n");
    }


}
