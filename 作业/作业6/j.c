#include <stdio.h>
int main()
{
    int n,i,k,j,l,temp=0,flag=0;
    int num[3000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&num[i]);
    }
    for(k=1;k<=n-1;k++)
    {
        for(j=0;j<=n-k-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(l=0;l<n;l++)
    {
        if(flag==0)
        {
            flag++;
            printf("%d",num[l]);
        }
        else
        {
            printf(" %d",num[l]);
        }
    }














    return 0;
}
