#include <stdio.h>
int get_array(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    return 0;
}

int sort_array(int a[],int n)//选择排序法
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
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
        return 0;
}

int main()
{
    int a[1000];
    int n;
    scanf("%d",&n);
    get_array(a,n);
    sort_array(a,n);
    put_array(a,n);


    return 0;
}
