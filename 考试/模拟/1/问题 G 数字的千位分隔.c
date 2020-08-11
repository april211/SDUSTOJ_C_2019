#include <stdio.h>
#include <string.h>
#define MAX_SIZE 23
int main()
{
	int T;
	int i,j;
	int len;
	char num[MAX_SIZE];
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		k=0;
		memset(num,0,sizeof(num));
		scanf("%s",num);
		len=strlen(num);
		if(len<=3)
		{
			for(j=0;j<len;j++)
			{
				printf("%c",num[j]);
			}
		}
		else
		{
			  for(j=len-1;j>=0;j--)
	    	{
		     	printf("%c",num[k]);
		    	k++;
		    }
		}
		
	}
	
	
	
	
	return 0;
}
