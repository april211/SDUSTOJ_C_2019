#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10001
int main()
{
	int n;
	int i,j,k=0;
	int p,count=0;
	int flag=0;
	int array[MAX_SIZE];
	scanf("%d",&n);
	for(i=3;i<n;i++)//取一个数 	打表 
	{
		count=0;
		if(i%2==0) continue;
		p=(int)(sqrt(i));
		for(j=2;j<=p;j++)//pan duan su shu  
		{
			if(i%j==0)
			{
				count++;
				break; 
			} 
			   
		}
		if(count==0)
		{
			array[k]=i;
			k++;
		}
		
	}
//	for(i=0;i<k;i++)
//	{
//		printf("%d ",array[i]);
//	}
    
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(array[i]+array[j]==n)
			  {
			  	
			  	if(flag==0)
			  	{
			  		printf("%d + %d = %d",array[i],array[j],n);
			     	flag++;
			    }
			    else
			    {
			    	printf("\n%d + %d = %d",array[i],array[j],n);
				}
			  	
			    
			  }
		}
	}
	
	
	return 0;
}
