#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int i,j,k,p,q,f;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
    	for(j=0;j<n-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<i;k++)
		{
			printf("%d",k);
		}
		printf("%d",i);
		for(k=i-1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
		
	}
	for(i=1;i<n;i++)
	{
		printf("%d",i);
	}
	printf("%d",n);
	for(i=n-1;i>=1;i--)
	{
		printf("%d",i);
	}
	printf("\n");
	for(i=n-1;i>=1;i--)
    {
    	for(j=n-i-1;j>=0;j--)
    	{
    		printf(" ");
		}
		for(k=1;k<i;k++)
		{
			printf("%d",k);
		}
		printf("%d",i);
		for(k=i-1;k>=1;k--)
		{
			printf("%d",k);
		}
		if(i!=1)
		  printf("\n");
		
	}
    
	
   return 0;	
}
