#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 109
int str_len(char *str)
{
	int len=0;
	while(1)
	{
		if(str[len]==0) break;
		len++;
	}
	
	return len;
	
}
int main()
{
	char str[22];
	gets(str);
	int len = str_len(str);
	printf("%d",len);	
	
	
}
