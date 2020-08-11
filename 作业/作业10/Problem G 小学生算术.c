#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 20
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
	char a[MAX_STR_LEN],b[MAX_STR_LEN];
	int i,j,k;
	int count=0,lena=0,lenb=0,maxlen,move=0;
	int flag=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(1)
	{
		memset(a,0,sizeof(a));
	    memset(b,0,sizeof(b));
	    count=0;
	    move=0;//移位数 
	    flag=0;
	    if(scanf("%s %s",a,b)==EOF) break;
	    lena=strlen(a);
	    lenb=strlen(b);
	    maxlen=max(lena,lenb);
	    if(lena>lenb)//对齐位数 
	    {
	    	move=lena-lenb;
	    	for(i=lenb-1;i>=0;i--)
	    	{
	    		b[i+lena-lenb]=b[i];
			}
			for(k=0;k<=lena-lenb-1;k++)
			{
				b[k]='0';
			}
	    	
	    	
		}
		//for(k=0;k<maxlen;k++)
	//	{
		//		printf("%c ",b[k]);
				
	//	}
	    //  printf("========"); 
        if(lena<lenb)
	    {
	    	move=lenb-lena;
	    	for(i=lena-1;i>=0;i--)
	    	{
	    		a[i+lenb-lena]=a[i];
			}
			for(k=0;k<=lenb-lena-1;k++)
			{
				a[k]='0';
			}
	    	
		}//现在lena==lenb,maxlen是变动之前的，其实也无所谓前后了。。 
	    for(j=maxlen-1;j>=0;j--)
	    {
	    	
	         if((a[j]-'0')+(b[j]-'0')+flag>=10)
	    	{
			    flag=0;//进位标 
	    		count++;
				flag++; 
			}
			else
			{
				flag=0;
			}
		}
		printf("%d\n",count);
	    
	}
	
	
	
	
	return 0;
}
