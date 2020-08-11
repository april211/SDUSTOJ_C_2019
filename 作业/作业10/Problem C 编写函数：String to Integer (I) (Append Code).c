#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 20
int strToInt(char str[])
{
	int i,j,k;
	int c=0;
	int weishu=0;
	int ans=0;
	int kkk[MAX_STR_LEN]={0};
	if(str[0]==0) return -1;
	else
	{
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]!='0') break;
			if(str[i]=='0') //记录最后一个前导零的位置 
			{
				c++;
			}
		}
		for(j=c;j<strlen(str);j++)
		{
			if(str[j]<'0' || str[j]>'9') break;//保持连续性 
			if(str[j]>='0' && str[j]<='9')
			{
				kkk[weishu]=str[j]-'0';
				weishu++;
			}
			
		}
		if(weishu==0) return 0;
		else
		{
			for(k=weishu-1;k>=0;k--)
			{
				//printf("====%d====\n",kkk[weishu-k-1]);
				ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
			}
			return ans;
		}
	}
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
