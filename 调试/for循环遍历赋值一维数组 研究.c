#include <stdio.h>
#define MAX_SIZE 1000
int main()
{
    int a[MAX_SIZE];
    int i,k,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    while(scanf("%d",&k)!=EOF)
    {
        printf("%d\n",a[k-1]);
    }




    return 0;
}
