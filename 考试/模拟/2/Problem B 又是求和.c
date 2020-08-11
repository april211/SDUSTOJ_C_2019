#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int m,n,temp;
	int i;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i<=n;i++)
	{
		if(i%4==0 && i%6==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
}
