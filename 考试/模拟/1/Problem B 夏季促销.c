#include <stdio.h>
#define PI 3.14159
int main()
{
	int a=0;
	int ans;
	int b;
	while(scanf("%d",&b)!=EOF)
	{
		a=a+b;
	}
	if(a>=0 && a<399)
		   printf("%d.00",a);
		if(a>=399 && a<899)
		   printf("%d.00",(int)(0.95*a));
        if(a>=899 && a<2499)
           printf("%d.00",(int)(0.9*a));
		if(a>=2499 && a<4899)
		   printf("%d.00",(int)(0.85*a));
		if(a>=4899)
		   printf("%d.00",(int)(0.8*a));
	
	
	
  return 0;	
}
