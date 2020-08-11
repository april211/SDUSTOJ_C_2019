#include <stdio.h>
int main()
{
	int k;
	int i,j,p;
	int m,n;
	int flag,count;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		flag=0;
		count=0;
		scanf("%d %d",&n,&m);
		for(j=0;j<=n;j++)//ji
		{
			p=n-j;//tu tou
			if(p*4+j*2==m)
			{
				
				if(flag==0)
				{
					printf("%d %d",j,p);
					count++; 
				}
				else
				{
					printf("\n");
					printf("%d %d",j,p);
					
				}
				flag++;
			}
			
			
		}
		     if(count==0)
			{
				printf("no result");
			}
	       	if(i!=k)
			   printf("\n");
	}
	
	
	return 0;
}
