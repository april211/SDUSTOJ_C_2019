#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	double p,s,w;
	double ans;
	scanf("%lf %lf %lf",&p,&s,&w);
	if(s<250.0)
	{
		ans=p*s*w;
	}
	if(s<500.0 && s>=250.0)
	{
		ans=p*s*w*0.98;
	}
	if(s<1000.0 && s>=500.0)
	{
		ans=p*s*w*0.95;
	}
	if(s<2000.0 && s>=1000.0)
	{
		ans=p*s*w*0.92;
	}
	if(s<3000.0 && s>=2000.0)
	{
		ans=p*s*w*0.9;
	}
	if(s>=3000.0)
	{
		ans=p*s*w*0.85;
	}
	printf("%.0lf0",ans/10.0);
	
	
	return 0;
} 
