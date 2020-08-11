#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1006
char array[MAX_SIZE];
char ans[MAX_SIZE];
int main()
{
	int i,j,k,m;
	int T,N;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		k=0;
		scanf("%d",&N);
		for(j=1;j<=N;j++)
		{
			if(j==1)
			{
				getchar();
			}
            
			gets(array);
			ans[k]=array[0];
			k++;
			memset(array,0,sizeof(array));
		}
		for(m=0;m<strlen(ans);m++)
		{
			printf("%c",ans[m]);
		}
		memset(ans,0,sizeof(ans));
		if(i!=T)
	    	printf("\n");
	}
	
	
	
	
	
    return 0;	
}
