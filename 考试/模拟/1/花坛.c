#include <stdio.h>
#define PI 3.14159
int main()
{
	double r,R,S;
	double temp;
	scanf("%lf %lf",&r,&R);
	if(r>R)
	{
		temp=r;
		r=R;
		R=temp;
	}
	S=PI*(R*R-r*r);
	printf("%.3lf",S);
	
	
	return 0;
}
