#include <stdio.h>
int summ(int k)
{
	int num,sum;
	k--;
	scanf("%d",&num);
	if(k==0) return num;
	else
	{
		sum=num+summ(k);
	}
	return sum;
	
	
}
int main()
{
	int k;
	int ans;
	scanf("%d",&k);
	ans=summ(k);
	printf("%d",ans);
	
	
	
    return 0;	
}
