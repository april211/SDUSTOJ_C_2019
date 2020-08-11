#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double a,b,c,p;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
    	p=(a+b+c)/2;
    	printf("%.2lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
	}
  
    
	return 0;	
	
}
