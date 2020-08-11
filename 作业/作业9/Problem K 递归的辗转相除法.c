#include <stdio.h>
#define MAX_SIZE 104
#define min(a,b) ((a)<(b)?(a):(b))
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else
	{
		if(a>=b)
		{
			gcd(min(a,b),a-b);
		}
		else
		{
			gcd(min(a,b),b-a);
		}
		
		
	}

}
int lcm(int a,int b)
{
	int ans;
	ans=(a*b)/(gcd(a,b));
	return ans;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d",gcd(a,b),lcm(a,b));
	
	
	
	return 0;
}
