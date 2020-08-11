#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 103
int main()
{
	int m,n;
	int num;
	int i,j,k,temp;
	int array[MAX_SIZE]={0};
	scanf("%d %d",&m,&n);
	if(m>n)
    {
    	   for(i=0;i<m;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<m-1;j++)
	{
		for(k=1;k<m-j;k++)
		{
			if(array[k]>array[k-1])
			{
				temp=array[k];
				array[k]=array[k-1];
				array[k-1]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
	     	printf("%d",array[i]);
	    else
	        printf(" %d",array[i]); 	
	}
	}
	else
	{
		  for(i=0;i<m;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<m-1;j++)
	{
		for(k=1;k<m-j;k++)
		{
			if(array[k]>array[k-1])
			{
				temp=array[k];
				array[k]=array[k-1];
				array[k-1]=temp;
			}
		}
	}

	for(i=0;i<m;i++)
	{
		if(i==0)
	     	printf("%d",array[i]);
	    else
	        printf(" %d",array[i]); 	
	}
	}
	
	
	
    return 0;	
}
