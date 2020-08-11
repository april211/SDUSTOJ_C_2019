#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int N,K;
	int i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&K);
		printf("case %d : ",i);
		for(j=0;j<K;j++)
		{
			printf("|");
		}
		if(i!=N)
		   printf("\n");
		
	}
	
	
  return 0;	
}
