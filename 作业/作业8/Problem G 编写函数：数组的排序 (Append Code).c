#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define  MAX_SIZE 3000
int get_array(int array[])
{
    int min,i=0,num=0;
    while(scanf("%d",&num)!=EOF)
   {
       i++;
       array[i-1]=num;

   }

    return i;
}

int sort_array(int a[],int n)
{
    int i,j,t;
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            if(a[i-1]>a[j])
            {
                t=a[i-1],a[i-1]=a[j],a[j]=t;
            }
        }
    }
    return 0;
}

int put_array(int a[],int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(flag==0)
        {
            printf("%d",a[i]);
            flag++;
        }
        else
        {
            printf(" %d",a[i]);
        }
    }
        return 0;
}








int main()
{
    int array[MAX_SIZE], size;

    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);

    return 0;
}

