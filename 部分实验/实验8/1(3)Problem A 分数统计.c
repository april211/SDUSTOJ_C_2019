#include<stdio.h>
int a[200];
int main()
{
	int i=0,j=0,n,max=0,flag=0,count=0;
	while(scanf("%d",&n)!=EOF)//sao miao zhi
	{
		if(n>=0&&n<=100)
		{
			a[n]++;
		}
	}
	        max=a[0];
    for(i=0;i<101;i++)
    {
    	if(a[i]>max)
    	{
    		max = a[i];
		}
	}
	for(j=0;j<101;j++)
	{
		if(a[j]==max)
		{
			printf("%d\n",j);
		}
	}
	return 0;
}
