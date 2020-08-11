#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 200001
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
	int T;
	int n=0,sum;
	int i,j,k,m;
	int count=0;
	int array[MAX_SIZE]={0};
	int ans[MAX_SIZE]={0};
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		sum=0;
		count=0;
		memset(array,0,sizeof(array));
        memset(ans,0,sizeof(ans));
		for(j=1;j<=n;j++)//±àºÅÊÇ´Ó1µ½n 
		{
			scanf("%d",&array[j]);
			sum=sum+array[j];
		}
		
		for(k=1;k<=n;k++)
		{
			if(sum/n==array[k] && sum%n==0)
			{
				ans[count]=k;
				count++;
				
			}
		}
		if(count==0)
		{
			if(i==T)
			{
				printf("0");
			}
			else
			{
				printf("0\n");
			}
			
		}
		else//count!=0
		{
			printf("%d\n",count);
			for(m=0;m<count;m++)
			{
				if(m==0)
				{
					printf("%d",ans[m]);
				}
				else
				{
					printf(" %d",ans[m]);
				}
				
			}
			if(i!=T)
			  {
			  	printf("\n");
			  }
		}
		
	}
}
