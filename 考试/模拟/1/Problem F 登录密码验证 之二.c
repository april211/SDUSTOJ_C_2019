#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 24
int upr(char array[])
{
	int i,j;
	int len1=0;
    while(1)
    {
    //	printf("==========");
    	if(array[len1]==0) break;
    	len1++;
	}
	for(i=0;i<len1;i++)
	{
		if(array[i]=='a' || array[i]=='b'|| array[i]=='c' ||array[i]=='d'||array[i]=='e'||array[i]=='f'||array[i]=='g'||array[i]=='h'||array[i]=='i'||array[i]=='j'||array[i]=='k'||array[i]=='l'||array[i]=='m'||array[i]=='n'||array[i]=='o'||array[i]=='p'||array[i]=='q'||array[i]=='r'||array[i]=='s'||array[i]=='t'||array[i]=='u'||array[i]=='v'||array[i]=='w'||array[i]=='x'||array[i]=='y'||array[i]=='z')
		{
			array[i]=array[i]-32;
		}
	}
	return 0;
	
}
int main()
{
	char key[MAX_SIZE],array[MAX_SIZE];
	int count=0;
	memset(key,0,sizeof(key));
	memset(array,0,sizeof(array));
	scanf("%s",key);//这里用gets是不对的 
	upr(key);
	while(scanf("%s",array)!=EOF)
	{
		
		upr(array);
		if(count==5)
		{
		   printf("Out of limited!\n");
		   continue;
		} 
		if(strcmp(key,array)==0)
		{
			printf("Welcome!");
			break;
		}
		if(strcmp(key,array)!=0)
		{
			printf("Wrong!\n");
			memset(array,0,sizeof(array));
			count++;
		}
		
		
	}
	
	
	
	
	
	return 0;
}
