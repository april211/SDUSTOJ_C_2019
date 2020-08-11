#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 109
char* str_copy(char*tar,char*sour)
{
	int i=0;
	while(1)
	{
		
		*(tar+i)=*(sour+i);
		if(*(sour+i)==0) break;
		i++;
		
	}
	return tar;
	
	
}
int main()
{
	char sour[50],tar[50];
	char* p;
	gets(sour);
	printf("%s\n",sour);
	
	p=str_copy(tar,sour);
	printf("%s\n", tar);
	printf("%s\n", p);
	
	return 0;
}
