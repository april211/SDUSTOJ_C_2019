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
    int flag1=0,flag2=0;
    int kkk[MAX_STR_LEN]= {0};
    if(str[0]==0)
        return 0;
    else
    {
        for(i=0; i<strlen(str); i++)
        {
            if(i==0)
            {
                if(str[0]=='+')
                {
                    flag1++;
                    continue;
                }
                if(str[0]=='-')
                {
                    flag2++;
                    continue;
                }
            }
            if(str[i]!='0')
                break;
            if(str[i]=='0') //记录最后一个前导零的位置
            {
                c++;
            }
        }
        if(flag1==0 && flag2==0)//没有正负号
        {
            for(j=c; j<strlen(str); j++)
            {
                if(str[j]<'0' || str[j]>'9')
                    continue;
                if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

            }
            if(weishu==0)
                return 0;
            else
            {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return ans;
            }
        }
        if(flag1==1 && flag2==0)
        {
             for(j=c+1; j<strlen(str); j++)
            {
                if(str[j]<'0' || str[j]>'9')
                    continue;
                if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

            }
            if(weishu==0)
                return 0;
            else
            {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return ans;
            }
        }
         if(flag1==0 && flag2==1)
        {
             for(j=c+1; j<strlen(str); j++)
            {
                if(str[j]<'0' || str[j]>'9')
                    continue;
                if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

            }
            if(weishu==0)
                return 0;
            else
            {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return -ans;
            }
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
