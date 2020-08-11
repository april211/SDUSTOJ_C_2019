#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 104
int move(int n,int f,int t)
{
	printf("   plate %d : from %d to %d\n",n,f,t);
	return 0;
}
int hanoi(int a,int b,int c,int d)//b-->d  by c 
{
	if(a==1) move(1,b,d);
	else
	{
			hanoi(a-1,b,d,c);
	        move(a,b,d);
        	hanoi(a-1,c,b,d);
	}

}
int main()
{
	int a,b,c,d;
	int i=0;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		i++;
		printf("case %d :\n",i);
        hanoi(a,b,c,d);
        printf("\n");
	}
	
	return 0;
}
